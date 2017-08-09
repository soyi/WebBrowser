//
//  ZWDatabaseQueue.h
//  WebBrowser
//
//  Created by Panda on 2017/4/6.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import "FMDatabaseQueue.h"
#import "ZWSQLiteHeader.h"
#import "ZWDatabase.h"

@interface ZWDatabaseQueue : FMDatabaseQueue

- (void)inZWDatabase:(void (^)(ZWDatabase *))block;

@end
