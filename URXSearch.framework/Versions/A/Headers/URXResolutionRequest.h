//
//  URXResolutionRequest.h
//  URXSearch
//
//  Created by James Turner on 11/24/14.
//  Copyright (c) 2014 URX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "URXResolutionResponse.h"
#import "URXAPIError.h"

@interface URXResolutionRequest : NSObject

@property (nonatomic,readonly) NSString *urxResolutionUrl;

+ (instancetype)requestFromUrl:(NSString *)urlString;

- (void)resolveAsynchronouslyWithSuccessHandler:(void (^)(URXResolutionResponse *))successHandler andFailureHandler:(void (^)(URXAPIError *))failureHandler;
- (void)resolveAsynchronouslyWithWebFallbackAndFailureHandler:(void (^)(URXAPIError *))failureHandler;
- (void)resolveAsynchronouslyWithAppStoreFallbackAndFailureHandler:(void (^)(URXAPIError *))failureHandler;
- (void)resolveAsynchronouslyWithViewController:(UIViewController *)viewController storeKitFallbackAndFailureHandler:(void (^)(URXAPIError *))failureHandler;
- (void)resolveAsynchronouslyWithStoreKitFallbackAndFailureHandler:(void (^)(URXAPIError *))failureHandler;

- (URXResolutionResponse *)resolveSynchronously;

- (void)handleResolutionResponse:(NSHTTPURLResponse *)response request:(NSURLRequest *)request data:(NSData *)data error:(NSError *)error successHandler:(void (^)(URXResolutionResponse *))successHandler andFailureHandler:(void (^)(URXAPIError *))failureHandler;

@end
