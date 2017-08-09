//
//  BaiduSugResponseModel.h
//  WebBrowser
//
//  Created by Panda on 2016/11/14.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import "BaseResponseModel.h"

@interface BaiduSugResponseModel : BaseResponseModel

@property (nonatomic, copy) NSString *keyword;
@property (nonatomic, copy) NSArray<NSString *> *sugArray;

@end
