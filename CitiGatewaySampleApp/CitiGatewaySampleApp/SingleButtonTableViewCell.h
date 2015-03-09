//
//  SingleButtonTableViewCell.h
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/4/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SingleButtonTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIButton *button;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicatorView;

@end
