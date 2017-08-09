//
//  BookmarkTableViewCell.m
//  WebBrowser
//
//  Created by Panda on 2017/4/26.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import "BookmarkTableViewCell.h"

@implementation BookmarkTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
}

- (void)setEditing:(BOOL)editing animated:(BOOL)animated{
    [super setEditing:editing animated:animated];
    
    self.showsReorderControl = editing;
}

@end
