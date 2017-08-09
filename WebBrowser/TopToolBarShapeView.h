//
//  TopToolBarShapeView.h
//  WebBrowser
//
//  Created by Panda on 2016/10/12.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TopToolBarShapeView : UIView

@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

- (void)setTopURLOrTitle:(NSString *)urlOrTitle;

@end
