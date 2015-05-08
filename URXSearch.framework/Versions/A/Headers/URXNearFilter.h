//
//  URXNearFilter.h
//  URXSearch
//
//  Created by James Turner on 9/3/14.
//  Copyright (c) 2014 URX. All rights reserved.
//

#import "URXFilter.h"

@interface URXNearFilter : URXFilter

-(instancetype) initWithLatitude:(double)latitude AndLongitude:(double)longitude;
+(instancetype) nearLatitude:(double)latitude AndLongitude:(double)longitude;

@end