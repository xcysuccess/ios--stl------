//
//  TBTemplateTYPE.h
//  xcySTL
//
//  Created by XiangChenyu on 14-3-9.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcySTL_TBTemplateTYPE_h
#define xcySTL_TBTemplateTYPE_h

template< typename T >
class TBTemplateTYPE
{
public:
    static string name()
    {
        return typeid(T).name();
    }
};

//特化
template<>
class TBTemplateTYPE<bool>
{
public:
    static string name()
    {
        return "bool";
    }
};

template<typename T>
class TBTemplateTYPE<T*>
{
public:
    static string name()
    {
        return TBTemplateTYPE<T>::name() + "pointer";
//        typedef std::vector<T>::iterator vectIter;
//        vectIter itBegin = vec::begin();
//        vectIter itEnd   = vec::end();
//        
//        while(itBegin != itEnd)
//        {
//            cout << *itBegin << endl;
//        }
    }
};

#endif
