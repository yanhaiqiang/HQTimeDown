//
//  HQTimeDown.h
//  HQTimeDown
//
//  Created by admin on 2018/3/23.
//  Copyright © 2018年 闫海强. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,TimeDownType) {
    TimeDownTypeText = 0,//00时00分00秒
    TimeDownTypeNumber//00:00:00
};

typedef void(^TimeOverBlock)(void);

@interface HQTimeDown : UIView


/** 初始化视图
 *
 * @param frame 视图位置
 * @param type 倒计时的类型
 */
- (instancetype)initWithFrame:(CGRect)frame
                     WithType:(TimeDownType)type;

/** 初始化视图
 *
 * @param frame 视图位置
 * @param width label的宽度
 * @param type 倒计时的类型
 */
- (instancetype)initWithFrame:(CGRect)frame labelWidth:(CGFloat)width
                     WithType:(TimeDownType)type;

/** 设置背景属性
 *
 * @param backgroundColor 背景色，统一设置
 * @param color 文本颜色
 * @param rad 圆角大小
 */
- (void)setBackgroundColor:(UIColor *)backgroundColor
                 TextColor:(UIColor *)color
                    radiuo:(CGFloat)rad;

/** 文本颜色 */
@property (nonatomic, strong) UIColor *textColor;
/** 文本字体 */
@property (nonatomic, strong) UIFont *textFont;

@property (nonatomic, retain) UILabel *textTimerLabel;
/** 倒计时结束的回到block */
@property (nonatomic, copy) TimeOverBlock timeOverBlock;

/** 倒计时结束时间
 *
 * @endTime 结束时间，时间戳，类型是字符串
 */
- (void)setEndTime:(NSString *)endTime;
/** 开始倒计时
 *
 * @timeout 倒计时时间 单位秒
 */
- (void)startDown:(int)timeout;

/** 取消倒计时 */
- (void)destroyTimer;

@end
