//  Copyright (c) 2014 URX. All rights reserved.

#import <Foundation/Foundation.h>

@interface NSDictionary (JSONLD)

- (id)getSingle:(NSString *)key;
- (NSArray *)getMany:(NSString *)key;

@end
