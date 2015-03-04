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

@interface LoginViewController ()

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)loginButtonTouched {
    self.loginButton.hidden = YES;
    [self.activityIndicatorView startAnimating];
    LoginInfo *loginInfo = [[LoginInfo alloc] init];
    loginInfo.username = self.usernameTextField.text;
    loginInfo.password = self.passwordTextField.text;
    LoginViewController * __weak weakSelf = self;
    [loginInfo createAsync:^(id object, NSError *error) {
        if ([object token]) {
            [[ContextManager sharedManager] setLoginContext:@{@"loginInfo":object}];
            [weakSelf performSegueWithIdentifier:@"TabBarControllerSegueID" sender:self];
        }
        else {
            weakSelf.loginButton.hidden = NO;
            [weakSelf.activityIndicatorView stopAnimating];
            [[[UIAlertView alloc] initWithTitle:@"Login Error" message:error.description delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
        }
    }];
}

@end
