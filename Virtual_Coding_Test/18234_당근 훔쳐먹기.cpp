//
//  main.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/03.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<long long, long long> p1, pair<long long, long long> p2)
{
    return p1.second < p2.second;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, t;
    cin >> n >> t;
    vector<pair<long long, long long> > v(n);
    long long sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(), v.end(), cmp);
    
//    for(int i = 0; i < n; i++)
//    {
//        cout << v[i].first << " " << v[i].second << endl;
//    }
    
    for(int i = 0; i < n; i++)
    {
        sum += (v[i].first + v[i].second*(t-n+i));
    }
    cout << sum << endl;
}
