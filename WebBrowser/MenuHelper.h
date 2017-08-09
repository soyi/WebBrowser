//
//  MenuHelper.h
//  WebBrowser
//
//  Created by Panda on 16/7/29.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MenuHelperInterface <NSObject>

@optional

- (void)menuHelperFindInPage;
- (void)menuHelperFindInBaidu;

@end

@interface MenuHelper : NSObject

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(MenuHelper)
- (void)setItems;

@end
