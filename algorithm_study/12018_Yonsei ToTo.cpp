//
//  12018_Yonsei ToTo.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/16.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int main(void)
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int p, l;
        cin >> p >> l;
        vector<int> vec_m(p);
        for (int j = 0; j < p; j++)
        {
            cin >> vec_m[j];
        }
        if (p < l)
        {
            v.push_back(1);
        }
        else
        {
            sort(vec_m.begin(), vec_m.end(), greater<int>());
            v.push_back(vec_m[l-1]);
        }
    }
    sort(v.begin(), v.end());
    int result = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (m >= v[i])
        {
            m -= v[i];
            result++;
        }
        else
        {
            break;
        }
    }
    cout << result << endl;
    return 0;
    
}

