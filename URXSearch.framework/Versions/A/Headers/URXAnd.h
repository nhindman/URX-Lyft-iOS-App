//  Copyright (c) 2014 URX. All rights reserved.

#import "URXConcatenation.h"

@interface URXAnd : URXConcatenation

-(instancetype) initWithLeftQuery:(URXQuery *)leftQuery andRightQuery:(URXQuery *)rightQuery;

@end