//
//  URXWithinFilter.h
//  URXSearch
//
//  Created by James Turner on 1/28/15.
//  Copyright (c) 2015 URX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "URXFilter.h"

@interface URXWithinFilter : URXFilter

-(instancetype) initWithDistance:(NSString *)distance;
+(instancetype) withinDistance:(NSString *)distance;
@end