//
//  SearchInputView.h
//  WebBrowser
//
//  Created by Panda on 2016/12/29.
//  Copyright © 2016年 Panda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CharacterSelectView.h"

@interface SearchInputView : UIView

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIButton *cacelButton;
@property (weak, nonatomic) IBOutlet CharacterSelectView *slider;

@end
