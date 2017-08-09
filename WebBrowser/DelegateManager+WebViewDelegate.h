//
//  DelegateManager+WebViewDelegate.h
//  WebBrowser
//
//  Created by Panda on 2017/1/31.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import "DelegateManager.h"

@protocol WebViewDelegate;
@class WeakWebBrowserDelegate;

@interface WeakWebBrowserDelegate : NSObject

@property (nonatomic, weak) id<WebViewDelegate> delegate;

@end

@interface DelegateManager (WebViewDelegate)

- (NSArray<WeakWebBrowserDelegate *> *)webViewDelegates;
- (void)addWebViewDelegate:(id<WebViewDelegate>)delegate;

@end
