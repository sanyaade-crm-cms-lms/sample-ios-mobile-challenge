//
//  ContextManager.m
//  CitiGatewaySampleApp
//
//  Created by Maximiliano Sanchez on 3/3/15.
//  Copyright (c) 2015 AnyPresence. All rights reserved.
//

#import "ContextManager.h"

@implementation ContextManager

+ (id)sharedManager {
    static ContextManager *sharedContextManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedContextManager = [[self alloc] init];
    });
    return sharedContextManager;
}

@end
