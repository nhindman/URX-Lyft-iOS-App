//  Copyright (c) 2014 URX. All rights reserved.

#import "URXQuery.h"

@interface URXRawQuery : URXQuery

-(instancetype)initWithQueryString:(NSString *)queryString;
+(instancetype)queryFromString:(NSString *)queryString;

@end
