//  Copyright (c) 2014 URX. All rights reserved.

#import <Foundation/Foundation.h>
#import "URXAPIError.h"

@class URXAnd;
@class URXOr;
@class URXNot;
@class URXSearchResponse;

@interface URXQuery : NSObject

- (URXAnd *)and:(URXQuery *)query;
- (URXOr *)or:(URXQuery *)query;
- (URXNot *)not;
- (URXQuery *)paginateWithLimit:(int)limit andOffset:(int)offset;
- (NSString *)queryString;
- (BOOL)equals:(URXQuery *)query;
- (NSArray *)tags;
- (URXQuery *)withTagCategory:(NSString *)category AndValue:(NSString *)value;

/** Makes a search with this query asynchronously with a callback handler for the success case.
 @param (void (^)(URXSearchResponse *)) The callback to be invoked upon successful completion of the HTTP request.
 @param (void (^)(URXAPIError *)) The callback to be invoked upon failure of the HTTP request.
 @warning This method should be called when the user is to see the search result.
 */
- (void)searchAsynchronouslyWithSuccessHandler:(void (^)(URXSearchResponse *))successHandler andFailureHandler:(void (^)(URXAPIError *))failureHandler;

/** Makes a search with this query synchronously and returns the search response.
 @return A response object containing the search results and the error (if one occurred).
 @warning This method should be called when the user is to see the search result.
 */
- (URXSearchResponse *)searchSynchronously;

@end

#import "URXNot.h"
#import "URXSearchResponse.h"
