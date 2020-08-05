//
//  1476_날짜 계산.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/27.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int e=1,s=1,m=1, count=1;
    int c_e, c_s, c_m;
    cin >> c_e >> c_s >> c_m;
    while((e != c_e) || (s != c_s) || (m != c_m))
    {
        e++; s++; m++;
        if(e>15) e = 1;
        if(s>28) s = 1;
        if(m>19) m = 1;
        count++;
    }
    cout << count << endl;
    return 0;
}
