//
//  URXRangeableValue.h
//  URXSearch
//
//  Created by James Turner on 9/3/14.
//  Copyright (c) 2014 URX. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol URXRangeableValue

- (NSString *)queryValue;

@end


@interface NSDate (URXRangeableValue) <URXRangeableValue>
@end

@interface NSString (URXRangeableValue) <URXRangeableValue>
@end
