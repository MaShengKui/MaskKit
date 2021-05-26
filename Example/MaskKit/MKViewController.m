//
//  MKViewController.m
//  MaskKit
//
//  Created by mashengkui on 05/26/2021.
//  Copyright (c) 2021 mashengkui. All rights reserved.
//

#import "MKViewController.h"
#import <MaskKit/WBYPGradientView.h>

@interface MKViewController ()

@end

@implementation MKViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [[WBYPGradientView alloc] init];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
