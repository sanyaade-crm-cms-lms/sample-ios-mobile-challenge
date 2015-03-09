//
//  ContextManager.h
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/3/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContextManager : NSObject

@property (strong, nonatomic) NSDictionary *loginContext;
@property (strong, nonatomic) NSDictionary *loginAndAccountContext;

+ (id)sharedManager;

@end
