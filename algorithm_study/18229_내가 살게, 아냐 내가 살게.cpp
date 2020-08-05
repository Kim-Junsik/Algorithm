//
//  18229_내가 살게, 아냐 내가 살게.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/18.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m, k, value = 0;
    cin >> n >> m >> k;
    vector<vector<int> > v_1;
    vector<int> v_2;
    vector<long long> v_m(n);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> value;
            v_2.push_back(value);
        }
        v_1.push_back(v_2);
        v_2.clear();
    }
    
    bool flag = true;
    int idx = 0;
    while(flag)
    {
        for(int j = 0; j < n ; j++)
        {
            v_m[j] += v_1[j][idx];
            if(v_m[j] >= k)
            {
                cout << (j+1) << " " << (idx+1) << endl;
                flag=false;
                break;
            }
        }
        idx++;
    }
    
    return 0;
}
