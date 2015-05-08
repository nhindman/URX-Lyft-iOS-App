//
//  URXAppInstallOperation.h
//  URXSearch
//
//  Created by Robert S. Jones on 4/9/15.
//  Copyright (c) 2015 URX. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "URXResolutionResponse.h"

extern NSString *const URXResolutionResponseWillPresentStore;
extern NSString *const URXResolutionResponseDidPresentStore;
extern NSString *const URXResolutionResponseWillDismissStore;
extern NSString *const URXResolutionResponseDidDismissStore;
extern NSString *const URXResolutionResponseDidLoadAppDetails;

extern NSString *const URXResolutionResponseLoadAppDetailsSuccessKey;
extern NSString *const URXResolutionResponseLoadAppDetailsErrorKey;

// NSError Constants
extern NSString *const URXResolutionResponseErrorDomain;
extern NSString *const URXResolutionResponseStateKey;
extern NSString *const URXResolutionResponseEventKey;
extern NSString *const URXResolutionResponseErrorKey;

extern const NSInteger URXResolutionResponseInvalidStateCode;
extern const NSInteger URXResolutionResponseFailedProductCode;

@interface URXAppInstallOperation : NSOperation

@property (nonatomic, strong) UIViewController *presentingViewController;

@property (nonatomic, strong) URXResolutionResponse *resolutionResponse;
@property (nonatomic, strong, readonly) NSError *error;

@end
