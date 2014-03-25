//
//  traversetree.cpp
//  xcyDataStruct
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "traverTree.h"

int TraverTree::array[6] = {2, 3, 4, 5, 6, 7};
int TraverTree::index = 0;
void TraverTree::createTree(BTNode *pRootNode)
{
//    int arrayLength = sizeof(array)/ sizeof(array[0]);
    BTNode* pLeftNode = (BTNode*)malloc(sizeof(BTNode));
    pLeftNode->data = array[index++];
    pRootNode->pLeftNode = pLeftNode;
  

//        createTree(pLeftNode);

    BTNode* pRightNode = (BTNode*)malloc(sizeof(BTNode));
    pRightNode->data = array[index++];
    pRootNode->pRightNode = pRightNode;
//        createTree(pRightNode);
    
    pRootNode->pLeftNode->pLeftNode = NULL;
    pRootNode->pLeftNode->pRightNode = NULL;
    pRootNode->pRightNode->pLeftNode = NULL;
    pRootNode->pRightNode->pRightNode = NULL;
    
    
}




void TraverTree::preOrder(BTNode *pNode)
{
    if(pNode != NULL)
    {
        int data = pNode->data;
        cout << "当前的节点:" << data << endl;
        preOrder(pNode->pLeftNode);
        preOrder(pNode->pRightNode);
        
    }
    
}
void TraverTree::posOrder(BTNode *pNode)
{
    if(pNode != NULL)
    {
        posOrder(pNode->pLeftNode);
        int data = pNode->data;
        cout << "当前的节点:" << data << endl;
        posOrder(pNode->pRightNode);
    }
}
void TraverTree::InOrder (BTNode *pNode)
{
    if(pNode != NULL)
    {
        InOrder(pNode->pLeftNode);
        InOrder(pNode->pRightNode);
        int data = pNode->data;
        cout << "当前的节点:" << data << endl;
    }
}
void TraverTree::deleteTree()
{
    
}