//
//  stlcopy.h
//  xcySTL
//
//  Created by XiangChenyu on 14-3-6.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcySTL_stlcopy_h
#define xcySTL_stlcopy_h

template <typename Iter ,typename Pos>
void co(Iter IterBegin ,Iter IterEnd, Pos p)
{
    while(IterBegin != IterEnd)
        *p++ = *IterBegin++;
}

class stlcopy
{
public:
    stlcopy(){};
    ~stlcopy(){};
    
    static bool funcc(int n)
    {
        return n&1;
    }
    
    void testPrint()
    {
        int a[] = {3,9,2,6,8};
        int b[8] = {0};
        
        vector<int> vi(a, a+5);
        std::sort(vi.begin(),vi.end());
        printIterator(vi.begin(),vi.end(),' ');
        co(vi.begin(),vi.end(),b);
        int lengthg = sizeof(b);
        int bSize = lengthg /sizeof(*b);
        printIterator(b, b + bSize);
        
        copy_backward(vi.begin(), vi.end(), b+8);
        printIterator(b, b + bSize);
        
        vi.clear();
        
        //如果是奇数就从后面复制
        //remove_copy_if 是 和copy_if相反的，不满足条件就从后面插入
        remove_copy_if(b, b+5 ,back_inserter(vi), funcc);
        printIterator(vi.begin(),vi.end());
    }
    
   
};

#endif
