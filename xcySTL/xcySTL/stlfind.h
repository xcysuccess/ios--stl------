//
//  stlfind.h
//  xcySTL
//
//  Created by XiangChenyu on 14-3-6.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcySTL_stlfind_h
#define xcySTL_stlfind_h
#include <fstream>

class stlfind
{
public:
   static bool init_upper(const string& str)
    {
        return isupper(str[0]);
    }
    static bool has_o(const string& str)
    {
        return str.find_first_of("0o") != string::npos;
    }
    void testPrintIterator()
    {
        istream_iterator<int> in(cin);
        istream_iterator<int> end;
        vector<int> vi;
        copy(in,end,back_inserter(vi));
        printIterator(vi.begin(),vi.end());
        ostream_iterator<int> o(cout,"*");
        copy(vi.begin(),vi.end(),o);cout<<endl;
        ofstream fo("datafile");
        ostream_iterator<int> fiter(fo," ");
        copy(vi.begin(),vi.end(),fiter);fo<<endl;
        fo.close();
        ifstream fin("datafile");
        istream_iterator<int> fit(fin);
        vector<int> v;
        copy(fit,end,back_inserter(v));
        printIterator(v.begin(), v.end(), ',');
        fin.close();
    }
    void testPrint()
    {
        string a[7] = {"abc","good","Day","look","God","OK","bye"};
        
        int length = sizeof(a) / sizeof(*a);
        string *p = std::find(a, a + length,"good1");
        
        p = std::find_if(a, a + length, has_o);
        logprint(p, a, length);
        
        cout << "===>" << count_if(a, a + length,has_o) << endl;
        
    }
    
    void logprint(string *p, string *a, int length)
    {
        if( p != a + length)
        {
            cout << "找到了";
        }
        else
        {
            cout << "没找到";
        }
    }
    
};
#endif
