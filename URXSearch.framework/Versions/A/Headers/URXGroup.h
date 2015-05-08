//  Copyright (c) 2014 URX. All rights reserved.

#import "URXQuery.h"

@interface URXGroup : URXQuery

- (instancetype) initWithQueries:(NSArray *)queries;
+ (instancetype) groupQueries:(NSArray *)queries;

@end
