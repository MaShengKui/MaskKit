//
//  MKGradientView.h
//  MaskKit
//
//  Created by Mask on 2020/8/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 颜色渐变方向
typedef NS_ENUM(NSInteger, MKGradientDirection) {
    MKGradientDirectionLeftToRight,             // 从左到右
    MKGradientDirectionRightToLeft,             // 从右到左
    MKGradientDirectionBottomToTop,             // 从下到上
    MKGradientDirectionTopToBottom,             // 从上到下
    MKGradientDirectionLeftBottomToRightTop,    // 从左下到右上
    MKGradientDirectionLeftTopToRightBottom,    // 从左上到右下
    MKGradientDirectionRightBottomToLeftTop,    // 从右下到左上
    MKGradientDirectionRightTopToLeftBottom,    // 从右上到左下
};

@interface MKGradientView : UIView

/// 设置渐变参数，提供常用渐变方向
/// @param colors 渐变颜色
/// @param direction 常用渐变方向
- (void)configWithColors:(NSArray <UIColor *> *_Nullable)colors
               direction:(MKGradientDirection)direction;

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
