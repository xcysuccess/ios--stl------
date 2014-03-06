//
//  cMap.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-2-26.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "cMap.h"
#include <map>

cMap::cMap()
{
    std::map<int,std::string> mis;
    mis.insert(std::map<int,std::string>::value_type(5,"$"));
    mis.insert(pair<int,string>(8,"^"));
    mis.insert(make_pair(4,"y"));
    mis[3] = "∫";
    printMap(mis.begin(), mis.end());
}