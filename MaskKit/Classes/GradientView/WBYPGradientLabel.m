//
//  WBYPGradientLabel.m
//  YellowPage
//
//  Created by Mask on 2020/8/8.
//

#import "WBYPGradientLabel.h"

@interface WBYPGradientLabel ()

/// 渐变背景
@property (nonatomic,strong) WBYPGradientView *gradientView;

@end

@implementation WBYPGradientLabel

- (void)layoutSubviews {
    [super layoutSubviews];
    self.gradientView.frame = self.bounds;
}

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        [self addSubview:self.gradientView];
    }
    return self;
}

#pragma mark - 设置渐变参数，提供常用渐变方向
- (void)configWithColors:(NSArray<UIColor *> *)colors direction:(WBYPGradientDirection)direction {
    [self.gradientView configWithColors:colors direction:direction];
}

#pragma mark - 懒加载
- (WBYPGradientView *)gradientView {
    if (!_gradientView) {
        _gradientView = [[WBYPGradientView alloc] init];
    }
    return _gradientView;
}

@end
