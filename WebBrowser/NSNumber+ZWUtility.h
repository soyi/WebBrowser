//
//  NSNumber+ZWUtility.h
//  WebBrowser
//
//  Created by Panda on 2017/1/9.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (ZWUtility)

- (CGFloat)CGFloatValue;
- (id)initWithCGFloat:(CGFloat)value;
+ (NSNumber *)numberWithCGFloat:(CGFloat)value;

@end
