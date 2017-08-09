//
//  TabManager.h
//  WebBrowser
//
//  Created by Panda on 16/7/30.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BrowserContainerView.h"

@class WebModel, SessionData;

typedef void(^MultiWebViewOperationBlock)(NSArray<WebModel *> *);
typedef void(^CurWebViewOperationBlock)(WebModel *, BrowserWebView *);
typedef void(^WebBrowserNoParamsBlock)();

@interface WebModel : NSObject <NSSecureCoding>

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *imageKey;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) BrowserWebView *webView;
@property (nonatomic, assign) BOOL isImageProcessed;
@property (nonatomic, strong) SessionData *sessionData;

@end

@class BrowserWebView;

@interface TabManager : NSObject

@property (nonatomic, weak) BrowserContainerView *browserContainerView;

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(TabManager)
- (void)setMultiWebViewOperationBlockWith:(MultiWebViewOperationBlock)block;
- (void)setCurWebViewOperationBlockWith:(CurWebViewOperationBlock)block;
- (void)updateWebModelArray:(NSArray<WebModel *> *)webArray;
- (void)updateWebModelArray:(NSArray<WebModel *> *)webArray completion:(WebBrowserNoParamsBlock)block;
- (void)addWebModelWithURL:(NSURL *)url completion:(WebBrowserNoParamsBlock)completion;
- (void)saveWebModelData;
- (WebModel *)getCurrentWebModel;
- (BOOL)isCurrentWebView:(BrowserWebView *)webView;
- (void)stopLoadingCurrentWebView;

@end
