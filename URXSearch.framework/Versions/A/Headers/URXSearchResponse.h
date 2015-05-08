//  Copyright (c) 2014 URX. All rights reserved.

#import <Foundation/Foundation.h>
#import "URXAPIError.h"

@interface URXSearchResponse : NSObject

@property (strong, nonatomic, readonly) NSDictionary *entityData;
@property (strong, nonatomic, readonly) NSArray *results;
@property (strong, nonatomic, readonly) URXAPIError *error;

-(instancetype) initWithEntityData:(NSDictionary *)entityData andCorrelationId:(NSString *)correlationId;
-(instancetype) initWithError:(URXAPIError *)error;

@end
