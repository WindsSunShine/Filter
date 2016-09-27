//
//  ViewController.m
//  筛选
//
//  Created by 张建军 on 16/6/13.
//  Copyright © 2016年 张建军. All rights reserved.
//

#import "ViewController.h"
#import "CYLMainViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    
    CYLMainViewController * cyl = [[CYLMainViewController alloc]init];
    
    [self showViewController:cyl sender:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
