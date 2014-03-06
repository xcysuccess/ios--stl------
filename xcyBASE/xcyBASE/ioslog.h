//
//  ioslog.h
//  xcyBASE
//
//  Created by XiangChenyu on 14-1-6.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyBASE_ioslog_h
#define xcyBASE_ioslog_h



//降序排列
inline bool compareDecrease(int a, int b)
{
	return a > b;//a大于b时为逆序，a小于b时为顺序
}

//迭代器的处理
template <typename T>
void printIterator(T b, T e, char c = ' ')
{
    while( b != e)
    {
        std::cout << *b++ << c;
    }
    cout << std::endl;
}




#endif
