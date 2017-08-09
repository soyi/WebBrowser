//
//  SettingSwitchTableViewCell.m
//  WebBrowser
//
//  Created by Panda on 2017/2/14.
//  Copyright © 2017年 Panda. All rights reserved.
//

#import "SettingSwitchTableViewCell.h"

@implementation SettingSwitchTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    
    [self.switchControl addTarget:self action:@selector(handleSwitchValueChanged:) forControlEvents:UIControlEventValueChanged];
}

- (void)prepareForReuse{
    [super prepareForReuse];
    
    self.valueChangedBlock = nil;
}

- (void)handleSwitchValueChanged:(UISwitch *)switchControl{
    if (self.valueChangedBlock) {
        self.valueChangedBlock(switchControl);
    }
}

@end
