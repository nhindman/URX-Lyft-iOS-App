//
//  URXRange.h
//  URXSearch
//
//  Created by James Turner on 9/3/14.
//  Copyright (c) 2014 URX. All rights reserved.
//

#import "URXQuery.h"
#import "URXRangeableValue.h"

@interface URXRange : URXQuery

// Two different rangeable value types here cause onFailure to trigger upon resolving query
- (instancetype) initWithStart:(id<URXRangeableValue>)start AndEnd:(id<URXRangeableValue>)end;
+ (instancetype) rangeFromStart:(id<URXRangeableValue>)start ToEnd:(id<URXRangeableValue>)end;

@end