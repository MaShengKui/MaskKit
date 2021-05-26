//
//  WBYPGradientView.h
//  YellowPage
//
//  Created by Mask on 2020/8/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 颜色渐变方向
typedef NS_ENUM(NSInteger, WBYPGradientDirection) {
    WBYPGradientDirectionLeftToRight,             // 从左到右
    WBYPGradientDirectionRightToLeft,             // 从右到左
    WBYPGradientDirectionBottomToTop,             // 从下到上
    WBYPGradientDirectionTopToBottom,             // 从上到下
    WBYPGradientDirectionLeftBottomToRightTop,    // 从左下到右上
    WBYPGradientDirectionLeftTopToRightBottom,    // 从左上到右下
    WBYPGradientDirectionRightBottomToLeftTop,    // 从右下到左上
    WBYPGradientDirectionRightTopToLeftBottom,    // 从右上到左下
};

@interface WBYPGradientView : UIView

/// 设置渐变参数，提供常用渐变方向
/// @param colors 渐变颜色
/// @param direction 常用渐变方向
- (void)configWithColors:(NSArray <UIColor *> *_Nullable)colors
               direction:(WBYPGradientDirection)direction;

/// 设置渐变参数
/// @param colors 渐变颜色
/// @param locations 渐变颜色区间
/// @param startPoint 起始点
/// @param endPoint 结束点
- (void)configWithColors:(NSArray <UIColor *> *_Nullable)colors
               locations:(NSArray <NSNumber *> *_Nullable)locations
              startPoint:(CGPoint)startPoint
                endPoint:(CGPoint)endPoint;

@end

NS_ASSUME_NONNULL_END
