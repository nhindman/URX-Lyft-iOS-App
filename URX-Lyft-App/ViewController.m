//
//  ViewController.m
//  URX-Lyft-App
//
//  Created by Nathaniel on 5/6/15.
//  Copyright (c) 2015 Nathaniel. All rights reserved.
//

#import <URXSearch/URX.h>

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)buttonTapped:(id)sender {
    NSLog(@"%s: %d", __func__, __LINE__);
    URXDomainFilter *query = [URXDomainFilter domainWithPLD:@"lyft.com"];
    [query searchAsynchronouslyWithSuccessHandler:^(URXSearchResponse *response) {
        NSLog(@"response=%@", response);
        URXSearchResult *result = [response.results firstObject];
        [result resolveAsynchronouslyWithWebFallbackAndFailureHandler:^(URXAPIError *error) {
            NSLog(@"error=%@", error);
        }];
    } andFailureHandler:^(URXAPIError *error) {
        NSLog(@"error=%@", error);
    }];
}

@end
