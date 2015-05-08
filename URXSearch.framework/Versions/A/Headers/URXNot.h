//  Copyright (c) 2014 URX. All rights reserved.

#import "URXQuery.h"

@interface URXNot : URXQuery

-(instancetype) initWithQuery:(URXQuery *)query;
+(instancetype) notQuery:(URXQuery *)query;

@end
