//
//  2309_일곱난장이.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/20.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v(9);
    int sum = 0;
    bool flag = false;
    for(int i = 0; i < 9; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    for(int i = 0; i < 8; i++)
    {
        for(int j = i+1; j < 9; j++)
        {
            if((sum - v[i] - v[j]) == 100)
            {
                v[i] = 100;
                v[j] = 100;
                flag = true;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < 7; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
