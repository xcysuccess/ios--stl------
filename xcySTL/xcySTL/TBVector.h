//
//  vectorT.h
//  xcySTL
//
//  Created by XiangChenyu on 14-1-8.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcySTL__vectorT__
#define __xcySTL__vectorT__
/*
 当前容量： .capacity()
 约定容量： .reserve(n)
 下标[]: .operator[](i)不检查越界, .at(i)越界抛出异常
 */

class TBVector
{
public:
    TBVector();
    ~TBVector();
    
    void printTest();
};

#endif /* defined(__xcySTL__vectorT__) */
