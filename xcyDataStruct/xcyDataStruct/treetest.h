//
//  treetest.h
//  xcyDataStruct
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcyDataStruct__treetest__
#define __xcyDataStruct__treetest__

#include "traverTree.h"

class treetest
{
public:
    void TreeTestPreOrder()
    {
        __createRootTree();
        
        cout << "先序遍历-->" <<endl;
        __preOrder();
        
        cout << "中序遍历-->" <<endl;
        __posOrder();
        
        cout << "后序遍历-->" <<endl;
        __InOrder();
    }
private:
    void __createRootTree()
    {
        m_pRootNode = (BTNode*)malloc(sizeof(BTNode));
        m_pRootNode->data = 1;
        
        TraverTree::createTree(m_pRootNode);
    }
    void __preOrder()
    {
        TraverTree::preOrder(m_pRootNode);
    }
    
    void __InOrder()
    {
        TraverTree::InOrder(m_pRootNode);
    }
    
    void __posOrder()
    {
        TraverTree::posOrder(m_pRootNode);
    }
    
    BTNode* m_pRootNode;
};
#endif /* defined(__xcyDataStruct__treetest__) */
