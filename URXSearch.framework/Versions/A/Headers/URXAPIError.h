//  Copyright (c) 2014 URX. All rights reserved.

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, URXErrorType) {
    URXNoError, // Indicates no error
    URXNetworkConnectionError,
    URXBadRequestError,
    URXForbiddenError,
    URXQueryNotAcceptableError,
    URXNoSearchResultsError,
    URXDestinationNotFoundError,
    URXLinkGoneError,
    URXRateLimitedError,
    URXServerError,
    URXJSONParsingError,
    URXUnknownError
};

extern NSString * urxAPIErrorMessage(URXErrorType errorType);

@interface URXAPIError : NSObject

@property (nonatomic, readonly) URXErrorType errorType;
@property (nonatomic, readonly) NSString *errorMessage;
@property (strong, nonatomic, readonly) NSURLRequest *request;
@property (strong, nonatomic, readonly) NSHTTPURLResponse *response;
@property (strong, nonatomic, readonly) NSError *error;
@property (strong, nonatomic, readonly) NSData *data;

- (instancetype)initWithErrorType:(URXErrorType) errorType request:(NSURLRequest *)request response:(NSHTTPURLResponse *)response error:(NSError *)error data:(NSData *)data;

@end
