//
//  traverTree.h
//  xcyDataStruct
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcyDataStruct__traverTree__
#define __xcyDataStruct__traverTree__

struct node
{
    int data;
    node *pLeftNode;
    node *pRightNode;
};
typedef node BTNode;

class TraverTree
{
private:
    static int array[6];
    static int index;
public:
    static void createTree(BTNode *pRootNode);            //创建一棵树
    
    
    static void preOrder(BTNode *pNode);                    //先序遍历
    static void posOrder(BTNode *pNode);                    //中序遍历
    static void InOrder (BTNode *pNode);                    //后序遍历
    
    static void deleteTree();                               //删除整棵树
    
//private:
    TraverTree()
    {}
    ~TraverTree()
    {}
    
    
    
};

#endif /* defined(__xcyDataStruct__traverTree__) */
