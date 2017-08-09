//
//  ZWSQLiteManager.h
//  WebBrowser
//
//  Created by Panda on 2017/4/6.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZWSQLiteHeader.h"

#define ZW_IN_DATABASE(db, routine) do {                    \
    dispatch_async(self.synchQueue, ^{                      \
        [self.databaseQueue inZWDatabase:^(ZWDatabase *db) {\
            routine;                                        \
        }];                                                 \
    });                                                     \
} while (0)

@interface ZWSQLiteManager : NSObject

@property (nonatomic, strong, readonly) ZWDatabaseQueue *databaseQueue;
@property (nonatomic, strong, readonly) dispatch_queue_t synchQueue;

- (instancetype)initWithPath:(NSString *)inPath;
- (void)databaseManagerDidCreated;

@end
