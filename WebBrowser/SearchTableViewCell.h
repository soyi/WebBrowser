//
//  SearchTableViewCell.h
//  WebBrowser
//
//  Created by Panda on 2017/1/7.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchTableViewCell : UITableViewCell

- (void)updateCellWithString:(NSString *)text;
- (NSString *)cellText;

@end
