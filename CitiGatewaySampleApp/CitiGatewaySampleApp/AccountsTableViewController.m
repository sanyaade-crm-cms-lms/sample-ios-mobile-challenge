//
//  AccountsTableViewController.m
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/2/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import "AccountsTableViewController.h"
#import "AccountTableViewCell.h"
#import <APSDK/CitiGateway.h>
#import <APSDK/APObject+Remote.h>
#import <APSDK/Account.h>
#import <APSDK/Account+Remote.h>
#import "ContextManager.h"

@interface AccountsTableViewController ()

@property (strong, nonatomic) NSArray *accounts;
@property (assign, nonatomic) BOOL isLoading;

@end

@implementation AccountsTableViewController

- (void)viewDidLoad {    
    [super viewDidLoad];
    self.isLoading = YES;
    AccountsTableViewController * __weak weakSelf = self;
    [Account allWithContext:[[ContextManager sharedManager] loginContext] async:^(NSArray * objects, NSError * error) {
        weakSelf.isLoading = NO;
        weakSelf.accounts = objects;
        [weakSelf.tableView reloadData];
        if (error) {
            [[[UIAlertView alloc] initWithTitle:@"Accounts Error" message:error.description delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show];
        }
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setContextForAccountAtIndex:(NSInteger)index {
    Account *account = [self.accounts objectAtIndex:index];
    NSMutableDictionary *context = [NSMutableDictionary dictionary];
    [context addEntriesFromDictionary:[[ContextManager sharedManager] loginContext]];
    [context addEntriesFromDictionary:@{@"account":account}];
    [[ContextManager sharedManager] setLoginAndAccountContext:context];
}

- (void)balancesButtonTouched:(id)sender {
    [self setContextForAccountAtIndex:[sender tag]];
    [self performSegueWithIdentifier:@"BalancesSegueID" sender:self];
}

- (void)transactionsButtonTouched:(id)sender {
    [self setContextForAccountAtIndex:[sender tag]];
    [self performSegueWithIdentifier:@"TransactionsSegueID" sender:self];
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.isLoading ? 1 : [self.accounts count];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (self.isLoading) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"ActivityIndicatorCellID" forIndexPath:indexPath];
        return cell;
    }
    Account *account = [self.accounts objectAtIndex:[indexPath row]];
    AccountTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"AccountCellID" forIndexPath:indexPath];
    cell.idLabel.text = [NSString stringWithFormat:@"Account ID: %@", account.id];
    cell.descriptionLabel.text = account.productDescription;
    cell.numberLabel.text = [NSString stringWithFormat:@"Account number: %@", account.displayAcctNo];
    cell.balancesButton.tag = [indexPath row];
    [cell.balancesButton addTarget:self action:@selector(balancesButtonTouched:) forControlEvents:UIControlEventTouchUpInside];
    cell.transactionsButton.tag = [indexPath row];
    [cell.transactionsButton addTarget:self action:@selector(transactionsButtonTouched:) forControlEvents:UIControlEventTouchUpInside];
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
