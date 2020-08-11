//
//  1912_연속합.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/30.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, max_val=-2000;
    cin >> n;
    vector<int> v(n);
    vector<int> d(100001);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    d[0] = v[0];
    for(int i = 1; i <= n; i++)
    {
        d[i] = max(d[i-1]+v[i], v[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        max_val = max(max_val, d[i]);
    }
    
    cout << max_val <<endl;
    return 0;
}
