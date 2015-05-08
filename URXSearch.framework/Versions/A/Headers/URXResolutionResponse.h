//  Copyright (c) 2014 URX. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "URXAPIError.h"

@interface URXResolutionResponse : NSObject

@property (strong, nonatomic, readonly) NSDictionary *entityData;
@property (strong, nonatomic, readonly) URXAPIError *error;

@property (nonatomic, readonly) NSString *deeplink;
@property (nonatomic, readonly) NSURL *deeplinkURL;
@property (nonatomic, readonly) NSString *appStoreUri;
@property (nonatomic, readonly) NSString *webUri;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *appId;

+ (instancetype)resolutionResponseWithEntityData:(NSDictionary *)entityData;
+ (instancetype)resolutionResponseWithError:(URXAPIError *)error;

- (BOOL)launchDeeplink;
- (BOOL)launchInAppStore;
- (BOOL)launchInStoreKit:(UIViewController *)viewController;
- (BOOL)launchInBrowser;

@end
