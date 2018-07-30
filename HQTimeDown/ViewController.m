//
//  ViewController.m
//  HQTimeDown
//
//  Created by admin on 2018/3/23.
//  Copyright © 2018年 闫海强. All rights reserved.
//

#import "ViewController.h"
#import "HQTimeDown.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    HQTimeDown *timeDown = [[HQTimeDown alloc] initWithFrame:CGRectMake(50, 100, 200, 40) labelWidth:40 WithType:TimeDownTypeText];
    [self.view addSubview:timeDown];
    [timeDown setEndTime:@"1533003353"];
    timeDown.textFont = [UIFont systemFontOfSize:28];
    [timeDown setBackgroundColor:[UIColor grayColor] TextColor:[UIColor whiteColor] radiuo:5];
    
    HQTimeDown *timeDown1 = [[HQTimeDown alloc] initWithFrame:CGRectMake(50, timeDown.frame.origin.y + 100, 200, 40) labelWidth:40 WithType:TimeDownTypeNumber];
    [self.view addSubview:timeDown1];
    [timeDown1 setEndTime:@"1533003353"];
    timeDown1.textFont = [UIFont systemFontOfSize:18];
    [timeDown1 setBackgroundColor:[UIColor blueColor] TextColor:[UIColor whiteColor] radiuo:5];
    
    HQTimeDown *timeDown2 = [[HQTimeDown alloc] initWithFrame:CGRectMake(50, timeDown1.frame.origin.y + 100, 200, 40) labelWidth:40 WithType:TimeDownTypeNumber];
    [self.view addSubview:timeDown2];
    [timeDown2 startDown:60];
    timeDown2.textFont = [UIFont systemFontOfSize:18];
    [timeDown2 setBackgroundColor:[UIColor yellowColor] TextColor:[UIColor redColor] radiuo:5];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
