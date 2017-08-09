//
//  NSString+ZWUtility.h
//  WebBrowser
//
//  Created by Panda on 2017/1/7.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ZWUtility)

- (BOOL)isValidURL;
- (BOOL)isLocal;
- (NSString *)ellipsizeWithMaxLength:(NSInteger)maxLength;

@end
