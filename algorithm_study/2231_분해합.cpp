//
//  2231_분해합.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/28.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int in, di=0, cur=0;
    cin >> in;
    int check=0;
    bool flag = true;
    for(int i = 1; i < in; i++)
    {
        check=i;
        cur = i;
        di = cur%10;
        cur/=10;
        check += di;
        while(cur != 0)
        {
            di = cur%10;
            cur/=10;
            check += di;
        }
        if(check == in)
        {
            cout << i << endl;
            flag=false;
            break;
        }
    }
    if(flag)
        cout << 0 << endl;
    return 0;
}
