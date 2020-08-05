//
//  7568_덩치.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/28.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int, int> > v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    int rank = 1;
    for(int i=0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i!=j)&&(v[i].first < v[j].first) && (v[i].second < v[j].second))
                rank++;
        }
        cout << rank << " ";
        rank=1;
    }
    return 0;
}
