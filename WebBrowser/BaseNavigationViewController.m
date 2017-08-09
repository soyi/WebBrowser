//
//  BaseNavigationViewController.m
//  WebBrowser
//
//  Created by Panda on 2017/7/13.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import "BaseNavigationViewController.h"

@interface BaseNavigationViewController ()

@end

@implementation BaseNavigationViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    self.navigationBarHidden = YES;
    
    self.restorationIdentifier = @"baseNavigationController";
}

@end
