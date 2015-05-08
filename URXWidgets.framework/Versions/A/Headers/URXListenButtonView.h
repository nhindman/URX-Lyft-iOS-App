//  Copyright (c) 2014 URX. All rights reserved.

#import "URXKeywordContext.h"

IB_DESIGNABLE
@interface URXListenButtonView : UIButton

@property (nonatomic, strong) IBInspectable NSString *initialQuery;
@property (nonatomic,strong) IBInspectable UIColor *modalBarColor;
@property (nonatomic, strong) IBInspectable NSString *modalBarText;
@property (nonatomic, strong) IBInspectable UIColor *modalBarTextColor;
@property (nonatomic, strong) IBInspectable NSString *backButtonText;
@property (nonatomic, strong) IBInspectable UIColor *backButtonColor;
@property (nonatomic) IBInspectable BOOL backButtonBoldText;
@property (nonatomic, strong) IBInspectable UIColor *searchBarTextColor;
@property (nonatomic, assign) UIBarStyle barStyle;

@property (nonatomic, strong) IBOutlet id<URXKeywordContext>keywordContext;

@end