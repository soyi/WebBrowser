//
//  HTTPClient+SearchSug.h
//  WebBrowser
//
//  Created by Panda on 2016/11/14.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import "HTTPClient.h"

@interface HTTPClient (SearchSug)

- (NSURLSessionDataTask *)getSugWithKeyword:(NSString *)keyword success:(HttpClientSuccessBlock)success fail:(HttpClientFailureBlock)fail;

@end
