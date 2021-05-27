//
//  MKGradientLabel.h
//  MaskKit
//
//  Created by Mask on 2020/8/8.
//

#import <UIKit/UIKit.h>
#import "MKGradientView.h"

NS_ASSUME_NONNULL_BEGIN

@interface MKGradientLabel : UILabel

/// 设置渐变参数，提供常用渐变方向
/// @param colors 渐变颜色
/// @param direction 常用渐变方向
- (void)configWithColors:(NSArray <UIColor *> *_Nullable)colors
               direction:(MKGradientDirection)direction;

@end

NS_ASSUME_NONNULL_END
