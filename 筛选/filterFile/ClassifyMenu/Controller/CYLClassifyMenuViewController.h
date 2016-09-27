//
//  CYLClassifyMenuViewController.h
//  CollectionViewClassifyMenu
//
//  Created by https://github.com/ChenYilong on 15/3/17.
//  Copyright (c)  http://weibo.com/luohanchenyilong/ . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CYLClassifyMenuViewController : UIViewController
// 设置点击button上面的文字
@property(nonatomic,strong)NSString *cellTitle;
// 设置点击后传递的字典数据
@property(nonatomic,strong)__block NSMutableDictionary * dataSourceDic;


@end

