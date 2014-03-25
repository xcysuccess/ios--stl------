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
    treetest treetest;
    treetest.TreeTestPreOrder();
//    dutytest::show();
//    observertest::show();
//    cMap cmp;
//    char b = 'k';
//    TBTemplateTYPE<char*> ttChar;
//    cout << ttChar.name() << endl;
//    std::vector<int> vec(10,5);
//    TBTemplateTYPE<vec> tbType;
//    tbType.name();
//    testDrivedPtr();
//    cout << typeid(Fact<5>).name() << endl;
//    Fact<5> fact0;
//    fact0.printTestFact();
    
//    TBAssociate tbQueue;
//    tbQueue.printTest();
//    wyMultiSet tWYMultiSet;
//    tWYMultiSet.testwyMultiSet();
    
//    stlfind jsSpecial;
//    jsSpecial.testPrintIterator();
    //    cMap map;
}

@end
