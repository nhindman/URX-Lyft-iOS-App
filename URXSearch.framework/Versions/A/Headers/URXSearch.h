//
//  URXSearch.h
//  URXSearch
//
//  Created by Robert S. Jones on 4/13/15.
//  Copyright (c) 2015 URX. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const URXSearchDeeplinkAlertDefaultTitle;
extern NSString *const URXSearchDeeplinkAlertDefaultMessage;
extern NSString *const URXSearchDeeplinkAlertDefaultCancelButtonTitle;
extern NSString *const URXSearchDeeplinkAlertDefaultConfirmButtonTitle;

@interface URXSearch : NSObject

+ (NSString *)deeplinkAlertTitle;
+ (void)setDeeplinkAlertTitle:(NSString *)deeplinkAlertTitle;

+ (NSString *)deeplinkAlertMessage;
+ (void)setDeeplinkAlertMessage:(NSString *)deeplinkAlertMessage;

+ (NSString *)deeplinkAlertCancelButtonTitle;
+ (void)setDeeplinkAlertCancelButtonTitle:(NSString *)deeplinkAlertCancelButtonTitle;

+ (NSString *)deeplinkAlertConfirmButtonTitle;
+ (void)setDeeplinkAlertConfirmButtonTitle:(NSString *)deeplinkAlertConfirmButtonTitle;

@end
