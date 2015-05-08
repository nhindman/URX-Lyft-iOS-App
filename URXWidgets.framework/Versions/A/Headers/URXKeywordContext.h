//  Copyright (c) 2014 URX. All rights reserved.

#import <UIKit/UIKit.h>

@protocol URXKeywordContext <NSObject>

- (NSString *)keywords;

@end

@interface UILabel (URXKeywordContext) <URXKeywordContext>
@end

@interface UIButton (URXKeywordContext) <URXKeywordContext>
@end

@interface UISegmentedControl (URXKeywordContext) <URXKeywordContext>
@end

@interface UITextField (URXKeywordContext) <URXKeywordContext>
@end

@interface UITextView (URXKeywordContext) <URXKeywordContext>
@end

@interface UINavigationBar (URXKeywordContext) <URXKeywordContext>
@end

@interface UINavigationItem (URXKeywordContext) <URXKeywordContext>
@end

@interface UISearchBar (URXKeywordContext) <URXKeywordContext>
@end