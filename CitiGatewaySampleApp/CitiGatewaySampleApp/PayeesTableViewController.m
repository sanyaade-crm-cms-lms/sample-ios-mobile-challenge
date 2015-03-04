//
//  PayeesTableViewController.m
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/4/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import "PayeesTableViewController.h"
#import "PayeeTableViewCell.h"
#import <APSDK/CitiGateway.h>
#import <APSDK/APObject+Remote.h>
#import <APSDK/Payee.h>
#import <APSDK/Payee+Remote.h>
#import "ContextManager.h"

@interface PayeesTableViewController ()

@property (strong, nonatomic) NSArray *payees;
@property (assign, nonatomic) BOOL isLoading;

@end

@implementation PayeesTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.isLoading = YES;
    PayeesTableViewController * __weak weakSelf = self;
    [Payee allWithContext:[[ContextManager sharedManager] loginContext] async:^(NSArray * objects, NSError * error) {
        weakSelf.isLoading = NO;
        weakSelf.payees = objects;
        [weakSelf.tableView reloadData];
        if (error) {
            [[[UIAlertView alloc] initWithTitle:@"Payees Error" message:error.description delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
        }
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.isLoading ? 1 : [self.payees count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (self.isLoading) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"ActivityIndicatorCellID" forIndexPath:indexPath];
        return cell;
    }
    Payee *payee = [self.payees objectAtIndex:[indexPath row]];
    PayeeTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"PayeeCellID" forIndexPath:indexPath];
    cell.idLabel.text = [NSString stringWithFormat:@"Payee ID: %@", payee.id];
    cell.descriptionLabel.text = payee.payeeDescription;
    cell.paymentMethodLabel.text = [NSString stringWithFormat:@"Payment Method: %@", payee.paymentMethod];
    cell.lastPaymentAmountLabel.text = [NSString stringWithFormat:@"Last Payment Amount: %@", payee.lastPaymentAmt];
    cell.bankNameExtLabel.text = [NSString stringWithFormat:@"Bank Name Ext: %@", payee.bankNameExt];
    cell.typeLabel.text = [NSString stringWithFormat:@"Type: %@", payee.payeeType];
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
