//
//  TransferFundsTableViewController.m
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/4/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import "TransferFundsTableViewController.h"
#import "TextEntryTableViewCell.h"
#import "SingleButtonTableViewCell.h"
#import <APSDK/RetailBanking.h>
#import <APSDK/APObject+Remote.h>
#import <APSDK/RetailBankingAccountFundTransfer.h>
#import <APSDK/RetailBankingAccountFundTransfer+Remote.h>
#import "ContextManager.h"

@interface TransferFundsTableViewController ()

@property (strong, nonatomic) NSArray *fieldsNames;
@property (strong, nonatomic) NSArray *fieldsTypes;
@property (strong, nonatomic) NSMutableArray *fieldsValues;
@property (assign, nonatomic) BOOL isLoading;

@end

@implementation TransferFundsTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.fieldsNames = @[@"sourceAccountId",
                         @"destinationAccountId",
                         @"destinationId",
                         @"payeeId",
                         @"amount",
                         @"currency",
                         @"paymentType",
                         @"transactionDate",
                         @"memo",
                         @"payeeDesc",
                         @"payeeType"];
    
    self.fieldsTypes = @[@"String",
                         @"String",
                         @"String",
                         @"String",
                         @"Float",
                         @"String",
                         @"Integer",
                         @"String",
                         @"String",
                         @"String",
                         @"String"];
    
    [self resetFieldValues];
    
    UITapGestureRecognizer *singleTapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(singleTappedView)];
    [self.view addGestureRecognizer:singleTapGestureRecognizer];
}

- (void)resetFieldValues {
    self.fieldsValues = [NSMutableArray arrayWithCapacity:[self.fieldsNames count]];
    for (NSUInteger index = 0; index < [self.fieldsNames count]; index++) {
        [self.fieldsValues addObject:@""];
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)singleTappedView {
    [self.view endEditing:YES];
}

- (void)submitButtonTouched:(id)sender {
    NSUInteger destinationAccountIdValueLength = [self.fieldsValues[1] length];
    NSUInteger payeeIdValueLength = [self.fieldsValues[3] length];
    if (destinationAccountIdValueLength || payeeIdValueLength) {
        [self.view endEditing:YES];
        self.isLoading = YES;
        NSArray *indexPaths = @[[NSIndexPath indexPathForItem:[sender tag] inSection:0]];
        [self.tableView reloadRowsAtIndexPaths:indexPaths withRowAnimation:UITableViewRowAnimationAutomatic];
        RetailBankingAccountFundTransfer *fundTransfer = [[RetailBankingAccountFundTransfer alloc] init];
        for (NSUInteger index = 0; index < [self.fieldsNames count]; index++) {
            id value = self.fieldsValues[index];
            if(index == 0) {
                NSMutableDictionary *context = [NSMutableDictionary dictionary];
                [context addEntriesFromDictionary:[[ContextManager sharedManager] loginContext]];
                [context setObject:value forKey:@"params.id"];
                [[ContextManager sharedManager] setLoginContext:context];
            }
            else {
                if ([self.fieldsTypes[index] isEqualToString:@"Integer"]) {
                    value = [NSNumber numberWithInteger:[value integerValue]];
                }
                if ([self.fieldsTypes[index] isEqualToString:@"Float"]) {
                    value = [NSNumber numberWithFloat:[value floatValue]];
                }
                [fundTransfer setValue:value forKey:self.fieldsNames[index]];
            }
        }
        TransferFundsTableViewController * __weak weakSelf = self;
        [fundTransfer createAsyncWithContext:[[ContextManager sharedManager] loginContext] async:^(id object, NSError *error) {
            weakSelf.isLoading = NO;
            [weakSelf.tableView reloadRowsAtIndexPaths:indexPaths withRowAnimation:UITableViewRowAnimationAutomatic];
            if ([object referenceNumber]) {
                [weakSelf resetFieldValues];
                [weakSelf.tableView reloadData];
                [[[UIAlertView alloc] initWithTitle:@"Fund Transfer Succesfull" message:[NSString stringWithFormat:@"Reference Number: %@", [object referenceNumber]] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
            }
            else {
                [[[UIAlertView alloc] initWithTitle:@"Fund Transfer Error" message:error.description delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
            }
        }];
    }
    else {
        [[[UIAlertView alloc] initWithTitle:@"Fund Transfer Error" message:@"Fields 'payeeId' and 'destinationAccountId' must not be empty." delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
    }
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [self.view endEditing:YES];
    return YES;
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string {
    NSString *resultString = [textField.text stringByReplacingCharactersInRange:range withString:string];
    [self.fieldsValues replaceObjectAtIndex:textField.tag withObject:resultString];
    return YES;
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [self.fieldsNames count]+1;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if ([indexPath row] == [self.fieldsNames count]) {
        SingleButtonTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"SingleButtonCellID" forIndexPath:indexPath];
        cell.button.tag = [indexPath row];
        [cell.button addTarget:self action:@selector(submitButtonTouched:) forControlEvents:UIControlEventTouchUpInside];
        cell.button.hidden = self.isLoading;
        if (self.isLoading) [cell.activityIndicatorView startAnimating];
        else [cell.activityIndicatorView stopAnimating];
        return cell;
    }
    TextEntryTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"TextEntryCellID" forIndexPath:indexPath];
    cell.fieldNameLabel.text = [self.fieldsNames objectAtIndex:[indexPath row]];
    cell.fieldValueTextField.text = [self.fieldsValues objectAtIndex:[indexPath row]];
    cell.fieldValueTextField.tag = [indexPath row];
    cell.fieldValueTextField.delegate = self;
    return cell;
}


/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    } else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath {
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
