//
//  LoginViewController.m
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/2/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import "LoginViewController.h"
#import <APSDK/CitiGateway.h>
#import <APSDK/APObject+Remote.h>
#import <APSDK/LoginInfo.h>
#import <APSDK/LoginInfo+Remote.h>
#import "ContextManager.h"

#define kLoginButtonToKeyboardOffset 25.0

@interface LoginViewController ()

@property (assign, nonatomic) CGFloat defaultKeyboardConstraintConstant;

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.defaultKeyboardConstraintConstant = self.keyboardConstraint.constant;
    
    UITapGestureRecognizer *singleTapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(singleTappedView)];
    [self.view addGestureRecognizer:singleTapGestureRecognizer];
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillBeShown:)
                                                 name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillBeHidden:)
                                                 name:UIKeyboardWillHideNotification object:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)keyboardWillBeShown:(NSNotification*)notification {
    NSDictionary* info = [notification userInfo];
    CGSize endSize = [[info objectForKey:UIKeyboardFrameEndUserInfoKey] CGRectValue].size;
    UIViewAnimationOptions animationCurve = [[info objectForKey:UIKeyboardAnimationCurveUserInfoKey] intValue];
    NSTimeInterval animationDuration = [[info objectForKey:UIKeyboardAnimationDurationUserInfoKey] doubleValue];
    self.keyboardConstraint.constant = fmaxf(self.defaultKeyboardConstraintConstant, -(self.view.bounds.size.height/2 - endSize.height - kLoginButtonToKeyboardOffset));
    [UIView animateWithDuration:animationDuration delay:0 options:animationCurve animations:^{
        [self.view layoutIfNeeded];
        if (self.logoImageView.frame.origin.y < 0) {
            self.logoImageView.alpha = 0;
        }
    } completion:^(BOOL finished) {}];
}

- (void)keyboardWillBeHidden:(NSNotification*)notification {
    NSDictionary* info = [notification userInfo];
    UIViewAnimationOptions animationCurve = [[info objectForKey:UIKeyboardAnimationCurveUserInfoKey] intValue];
    NSTimeInterval animationDuration = [[info objectForKey:UIKeyboardAnimationDurationUserInfoKey] doubleValue];
    self.keyboardConstraint.constant = self.defaultKeyboardConstraintConstant;
    [UIView animateWithDuration:animationDuration delay:0 options:animationCurve animations:^{
        [self.view layoutIfNeeded];
        self.logoImageView.alpha = 1.0;
    } completion:^(BOOL finished) {}];
}

- (void)singleTappedView {
    [self.view endEditing:YES];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [self.view endEditing:YES];
    return YES;
}

- (IBAction)loginButtonTouched {
    self.loginButton.hidden = YES;
    [self.activityIndicatorView startAnimating];
    NSDictionary *clientContext = @{@"clientID":[self.clientIdTextField.text copy]};
    LoginInfo *loginInfo = [[LoginInfo alloc] init];
    loginInfo.username = [self.usernameTextField.text copy];
    loginInfo.password = [self.passwordTextField.text copy];
    LoginViewController * __weak weakSelf = self;
    [loginInfo createAsyncWithContext:clientContext async:^(id object, NSError *error) {
        if ([object token]) {
            NSMutableDictionary *loginContext = [NSMutableDictionary dictionary];
            [loginContext addEntriesFromDictionary:clientContext];
            [loginContext addEntriesFromDictionary:@{@"loginInfo":object}];
            [[ContextManager sharedManager] setLoginContext:loginContext];
            [weakSelf performSegueWithIdentifier:@"TabBarControllerSegueID" sender:self];
        }
        else {
            weakSelf.loginButton.hidden = NO;
            [weakSelf.activityIndicatorView stopAnimating];
            [[[UIAlertView alloc] initWithTitle:@"Login Error" message:error.description delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
        }
    }];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
