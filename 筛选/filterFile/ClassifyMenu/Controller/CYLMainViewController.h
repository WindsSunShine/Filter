//
//  CYLMainViewController.h
//  CollectionViewClassifyMenu
//
//  Created by https://github.com/ChenYilong on 15/4/26.
//  Copyright (c)  http://weibo.com/luohanchenyilong/ . All rights reserved.
//

#import "CYLClassifyMenuViewController.h"
//创建用于传值的block
typedef void(^PassValue)(NSMutableDictionary *);

@interface CYLMainViewController : CYLClassifyMenuViewController

// 创建block变量
@property(nonatomic,copy)PassValue paDic;

@end
