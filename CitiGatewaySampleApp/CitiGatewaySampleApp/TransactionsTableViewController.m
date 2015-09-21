//
//  TransactionsTableViewController.m
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/2/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import "TransactionsTableViewController.h"
#import "TransactionTableViewCell.h"
#import <APSDK/RetailBanking.h>
#import <APSDK/APObject+Remote.h>
#import <APSDK/RetailBankingAccountTransaction.h>
#import <APSDK/RetailBankingAccountTransaction+Remote.h>
#import "ContextManager.h"

@interface TransactionsTableViewController ()

@property (strong, nonatomic) NSArray *transactions;
@property (assign, nonatomic) BOOL isLoading;

@end

@implementation TransactionsTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.isLoading = YES;
    TransactionsTableViewController * __weak weakSelf = self;
    [RetailBankingAccountTransaction allWithContext:[[ContextManager sharedManager] loginAndAccountContext] async:^(NSArray * objects, NSError * error) {
        weakSelf.isLoading = NO;
        weakSelf.transactions = objects;
        [weakSelf.tableView reloadData];
        if (error) {
            [[[UIAlertView alloc] initWithTitle:@"Transactions Error" message:error.description delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
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
    return self.isLoading ? 1 : [self.transactions count];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (self.isLoading) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"ActivityIndicatorCellID" forIndexPath:indexPath];
        return cell;
    }
    RetailBankingAccountTransaction *transaction = [self.transactions objectAtIndex:[indexPath row]];
    TransactionTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"TransactionCellID" forIndexPath:indexPath];
    cell.idLabel.text = [NSString stringWithFormat:@"Transaction ID: %@", transaction.id];
    cell.amoutLabel.text = [NSString stringWithFormat:@"Amount: %@", transaction.formattedAmount];
    cell.pendingDateLabel.text = [NSString stringWithFormat:@"Pending Date: %@", transaction.pendingDate];
    cell.typeLabel.text = [NSString stringWithFormat:@"Transaction Type: %@", transaction.transactionType];
    cell.descriptionLabel.text = [NSString stringWithFormat:@"Description: %@", transaction.transactionDescription];
    cell.activityLabel.text = [NSString stringWithFormat:@"Activity: %@", transaction.activity];
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
