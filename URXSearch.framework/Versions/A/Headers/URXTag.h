//
//  URXTag.h
//  URXSearch
//
//  Created by James Turner on 10/31/14.
//  Copyright (c) 2014 URX. All rights reserved.
//

#import "URXQuery.h"

@interface URXTag : URXQuery

- (instancetype) initWithQuery:(URXQuery *) query AndTags:(NSArray *)tags;

@end
