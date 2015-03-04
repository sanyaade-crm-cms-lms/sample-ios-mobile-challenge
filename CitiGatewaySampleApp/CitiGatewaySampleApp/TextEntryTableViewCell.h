//
//  TextEntryTableViewCell.h
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/4/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TextEntryTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *fieldNameLabel;
@property (weak, nonatomic) IBOutlet UITextField *fieldValueTextField;

@end
