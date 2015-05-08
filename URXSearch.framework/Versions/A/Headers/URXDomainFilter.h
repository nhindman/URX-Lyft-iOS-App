//  Copyright (c) 2014 URX. All rights reserved.

#import "URXFilter.h"

@interface URXDomainFilter : URXFilter

-(instancetype) initWithDomain:(NSString *)domain;
+(instancetype) domainWithPLD:(NSString *)pld;

@end
