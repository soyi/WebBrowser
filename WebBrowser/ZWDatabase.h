//
//  ZWDatabase.h
//  WebBrowser
//
//  Created by Panda on 2017/4/6.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import "FMDatabase.h"

@interface ZWDatabase : FMDatabase

- (FMResultSet *)executeZWQuery:(NSString *)sql withArgumentsInArray:(NSArray *)arguments;
- (BOOL)executeZWUpdate:(NSString *)sql withArgumentsInArray:(NSArray *)arguments;
- (BOOL)executeZWUpdate:(NSString*)sql;
- (BOOL)executeZWStatements:(NSString *)sql;

@end
