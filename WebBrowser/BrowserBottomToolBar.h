//
//  BrowserBottomToolBar.h
//  WebBrowser
//
//  Created by Panda on 2016/11/6.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BrowserWebView.h"
#import "BrowserBottomToolBarHeader.h"

@interface BrowserBottomToolBar : UIToolbar

@property (nonatomic, weak) id<BrowserBottomToolBarButtonClickedDelegate> browserButtonDelegate;

@end
