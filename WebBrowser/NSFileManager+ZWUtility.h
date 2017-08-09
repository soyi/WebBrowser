//
//  NSFileManager+ZWUtility.h
//  WebBrowser
//
//  Created by Panda on 2017/1/10.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (ZWUtility)

- (long long)getAllocatedSizeOfDirectoryAtURL:(NSURL *)directoryURL error:(NSError **)error;

- (long long)getAllocatedSizeOfDirectoryAtURLS:(NSArray<NSURL *> *)directoryURLs error:(NSError **)error;

@end
