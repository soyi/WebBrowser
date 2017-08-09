//
//  CardMainView.h
//  WebBrowser
//
//  Created by Panda on 2016/12/20.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CompletionBlock)();

@class CardCollectionViewCell;
@class WebModel;

@interface CardMainView : UIView

- (void)reloadCardMainViewWithCompletionBlock:(CompletionBlock)completion;
- (void)changeCollectionViewLayout;

@end
