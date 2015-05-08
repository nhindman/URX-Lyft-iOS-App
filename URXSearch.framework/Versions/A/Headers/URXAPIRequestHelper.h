//  Copyright (c) 2014 URX. All rights reserved.

#import <Foundation/Foundation.h>
#import "URXSearchResult.h"
#import "URXQuery.h"

#define URX_SEARCH_SDK_VERSION @"0.4"

@interface URXAPIRequestHelper : NSObject

/**
   Return the base URL for all API interactions.

   The default value is `https://beta.urx.io/`, but this value can be customized by
   adding the `URX Base URL` key to your application's plist.
 */
+ (NSString *)baseURLString;

+(NSMutableURLRequest *) requestWithURL:(NSString *)url;
+(NSMutableURLRequest *) searchRequestFromQuery:(URXQuery *)query;
+(NSMutableURLRequest *) resolutionRequestFromSearchResult:(URXSearchResult *)result;
+(NSString *) uriEncode:(NSString *)toEncode;

@end
