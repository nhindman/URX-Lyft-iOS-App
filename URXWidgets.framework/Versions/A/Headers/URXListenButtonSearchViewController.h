//  Copyright (c) 2014 URX. All rights reserved.

#import <UIKit/UIKit.h>

@interface URXListenButtonSearchViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UISearchBar *searchBar;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicatorView;
@property (strong, nonatomic) IBOutlet UILabel *resultsLabel;

@property (strong, nonatomic) NSString *lastQuery;
@property (strong, nonatomic) UIViewController *callingViewController;
@property (strong, nonatomic) UIColor *modalBarColor;
@property (strong, nonatomic) NSString *modalBarTitle;
@property (strong, nonatomic) UIColor *modalBarTextColor;
@property (strong, nonatomic) NSString *backButtonText;
@property (strong, nonatomic) UIColor *backButtonColor;
@property (nonatomic) BOOL backButtonBoldText;
@property (nonatomic, strong) UIColor *searchBarTextColor;

@end
