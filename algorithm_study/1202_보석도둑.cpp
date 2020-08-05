//
//  1202_보석도둑.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/21.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.first == p2.first)
        return p1.second > p2.second;
    return p1.first < p2.first;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k;
    long long out=0;
    cin >> n >> k;
    //vector<pair<int, int> >v1(n);
    vector<pair<int, int> >v1(n);
    vector<int> v2(k);
    
    for(int i = 0; i < n; i++)
    {
        cin >> v1[i].first >> v1[i].second;
    }
    for(int i = 0; i < k; i++)
    {
        cin >> v2[i];
    }
    
    sort(v1.begin(), v1.end(), cmp);
    sort(v2.begin(), v2.end());
    
    int idx = 0;
    priority_queue<int> p;
    for(int i = 0; i < k; i++)
    {

        while((idx < n) && (v2[i] >= v1[idx].first))
        {
            p.push(v1[idx].second);
            idx++;
        }
        if(!p.empty())
        {
            out+=p.top();
            p.pop();
        }
    }
    cout << out << endl;
     
    return 0;
}


/*
10 7
1 65
3 22
5 100
3 23
10 3
14 22
17 2
13 55
17 19
10 4
2 10 5 15 5 20 8 --> 291
*/
