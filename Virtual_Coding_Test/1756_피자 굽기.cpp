//
//  1756_피자 굽기.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/27.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int d, n, o_check;
    cin >> d >> n;
    vector<int> oven(d);
    vector<int> pizza(n);
    
    cin >> o_check;
    oven[0] = o_check;
    for(int i = 1; i < d; i++)
    {
        cin >> o_check;
        oven[i] = min(o_check, oven[i-1]);
    }
    for(int i = 0; i < n; i++)
    {
        cin >> pizza[i];
    }
    
    int idx = 0;
    
    for(int i = d-1; i >= 0; i--)
    {
        if(pizza[idx] <= oven[i])
        {
            idx++;
            if(idx >= n)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    
    if(idx < n)
    {
        cout << 0 << endl;
    }
    
    return 0;
}
