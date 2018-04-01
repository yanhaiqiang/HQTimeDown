//
//  HQTimeDown.h
//  HQTimeDown
//
//  Created by admin on 2018/3/23.
//  Copyright © 2018年 闫海强. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,TimeDownType) {
    TimeDownTypeText = 0,
    TimeDownTypeNumber
};

typedef void(^TimeOverBlock)(void);

@interface HQTimeDown : UIView

- (instancetype)initWithFrame:(CGRect)frame
                     WithType:(TimeDownType)type;
- (instancetype)initWithFrame:(CGRect)frame labelWidth:(CGFloat)width
                     WithType:(TimeDownType)type;

//设置背景色，文字颜色，圆角
- (void)setBackgroundColor:(UIColor *)backgroundColor
                 TextColor:(UIColor *)color
                    radiuo:(CGFloat)rad;

@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIFont *textFont;
@property (nonatomic, retain) UILabel *textTimerLabel;
@property (nonatomic, copy) TimeOverBlock timeOverBlock;


- (void)setEndTime:(NSString *)endTime;
- (void)startDown:(int)timeout;


- (void)destroyTimer;

@end
