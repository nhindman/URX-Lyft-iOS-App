//  Copyright (c) 2014 URX. All rights reserved.

#import <Foundation/Foundation.h>
#import "URXQuery.h"

@interface URXConcatenation : URXQuery

-(instancetype) initWithConcatenationString:(NSString *)concatenationString leftQuery:(URXQuery *)leftQuery andRightQuery:(URXQuery *)rightQuery;

@end
