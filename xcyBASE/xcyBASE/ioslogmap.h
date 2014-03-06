//
//  ioslogmap.h
//  xcyBASE
//
//  Created by XiangChenyu on 14-2-26.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyBASE_ioslogmap_h
#define xcyBASE_ioslogmap_h

template <typename K,typename V>
ostream& operator<<(ostream& o,const pair<K,V>& p)
{
    return o << p.first << ":" << p.second;
}

template <typename T>
void printMap(T b, T e, char c = ' ')
{
    while (b != e)
    {
        std::cout << *b++ << std::endl;
        if(c!='\n') cout << endl;
    }
}


#endif
