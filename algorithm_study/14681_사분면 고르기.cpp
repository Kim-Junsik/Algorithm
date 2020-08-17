//
//  14681_사분면 고르기.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/17.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x, y;
    cin >> x >> y;
    if(x > 0 && y > 0)
    {
        cout << 1 << endl;
    }
    else if(x > 0 && y < 0)
    {
        cout << 4 << endl;
    }
    else if(x < 0 && y > 0)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
    return 0;
}
