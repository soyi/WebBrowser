//
//  ZWUtility.h
//  WebBrowser
//
//  Created by Panda on 2016/10/27.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZWUtility : NSObject

//Objective-C Runtime Method
void MethodSwizzle(Class c,SEL origSEL,SEL overrideSEL);

@end
