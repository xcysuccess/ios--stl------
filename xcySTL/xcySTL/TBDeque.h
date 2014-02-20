//
//  TBDeque.h
//  xcySTL
//
//  Created by XiangChenyu on 14-1-11.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcySTL__TBDeque__
#define __xcySTL__TBDeque__

/*
 deque的个性:double-ended queue
 下标[] : .operator[](i)不检查越界 .at(i)越界抛异常
 增删: .push_front(element),.popfront();
 */

class TBDeque
{
public:
    TBDeque();
    ~TBDeque();
    
    void printTest();
};

#endif /* defined(__xcySTL__TBDeque__) */
