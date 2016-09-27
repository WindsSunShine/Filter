//
//  CYLMainViewController.m
//  CollectionViewClassifyMenu
//
//  Created by https://github.com/ChenYilong on 15/4/26.
//  Copyright (c)  http://weibo.com/luohanchenyilong/ . All rights reserved.
//

//View Controllers

#import "CYLMainViewController.h"
//Others

#import "AppDelegate.h"
#import "CYLParameterConfiguration.h"

@interface CYLMainViewController ()

@end

@implementation CYLMainViewController

#pragma mark - 💤 LazyLoad Method



#pragma mark - ♻️ LifeCycle Method

- (void)viewDidLoad {
    [super viewDidLoad];
//    [self initLeftBarButtonItem];
    [self initWithRightNavItem];
    
    self.automaticallyAdjustsScrollViewInsets = NO;
    
    // 更改返回箭头的颜色
    self.navigationController.navigationBar.tintColor = [UIColor whiteColor];
    
}

- (void)initWithRightNavItem {
    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithImage:nil style:UIBarButtonItemStylePlain target:self action:@selector(rightBarButtonClicked:)];
    item.title = @"确定";
    self.navigationItem.rightBarButtonItem = item;
}

/**
 * 初始化leftNavgationItem
 */
//- (void)initLeftBarButtonItem {
//    
//    
//    UIImage *image;
//   
//        image =
//        [[UIImage
//          imageNamed:@"navigationbar_leftBarButtonItem_itis_multiple_choice_filter_params_normal"]
//         imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
//    
//    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithImage:image style:UIBarButtonItemStyleDone target:self action:@selector(leftBarButtonClicked:)];
//    self.navigationItem.leftBarButtonItem = item;
//}

#pragma mark - 🎬 Actions Method

- (void)rightBarButtonClicked:(id)sender {
    
    
    
    if (self.paDic) {
    
    self.paDic(self.dataSourceDic);
    
    }
    [self.navigationController popViewControllerAnimated:YES];
    
    
   
}




@end
