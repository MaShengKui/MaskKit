//
//  MKGradientLabel.m
//  MaskKit
//
//  Created by Mask on 2020/8/8.
//

#import "MKGradientLabel.h"

@interface MKGradientLabel ()

/// 渐变背景
@property (nonatomic,strong) MKGradientView *gradientView;

@end

@implementation MKGradientLabel

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
- (void)configWithColors:(NSArray<UIColor *> *)colors direction:(MKGradientDirection)direction {
    [self.gradientView configWithColors:colors direction:direction];
}

#pragma mark - 懒加载
- (MKGradientView *)gradientView {
    if (!_gradientView) {
        _gradientView = [[MKGradientView alloc] init];
    }
    return _gradientView;
}

@end
