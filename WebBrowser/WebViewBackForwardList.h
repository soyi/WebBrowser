//
//  WebViewBackForwardList.h
//  WebBrowser
//
//  Created by Panda on 2017/3/15.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WebViewHistoryItem.h"

@interface WebViewBackForwardList : NSObject

@property (nonatomic, readonly) WebViewHistoryItem *currentItem;
@property (nonatomic, readonly) NSArray<WebViewHistoryItem *> *backList;
@property (nonatomic, readonly) NSArray<WebViewHistoryItem *> *forwardList;

- (instancetype)initWithCurrentItem:(WebViewHistoryItem *)currentItem backList:(NSArray<WebViewHistoryItem *> *)backList forwardList:(NSArray<WebViewHistoryItem *> *)forwardList;

@end
