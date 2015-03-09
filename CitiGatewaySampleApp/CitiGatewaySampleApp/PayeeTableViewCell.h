//
//  PayeeTableViewCell.h
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/4/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PayeeTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *idLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *paymentMethodLabel;
@property (weak, nonatomic) IBOutlet UILabel *lastPaymentAmountLabel;
@property (weak, nonatomic) IBOutlet UILabel *bankNameExtLabel;
@property (weak, nonatomic) IBOutlet UILabel *typeLabel;

@end
