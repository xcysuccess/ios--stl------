//
//  ViewController.m
//  xcyUI
//
//  Created by XiangChenyu on 14-1-11.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#import "ViewController.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self testPrint];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void) testPrint
{
    TBAssociate tbQueue;
    tbQueue.printTest();
}

@end
