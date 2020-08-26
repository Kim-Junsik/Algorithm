//
//  1946_신입사원.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/26.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t, n, count;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        count = n;
        vector<pair<int, int> > v(n);
        for(int j = 0; j < n; j++)
        {
            cin >> v[j].first >> v[j].second;
        }
        sort(v.begin(), v.end(), cmp);
        
        int check = v[0].second;
        for(int j = 1; j < n; j++)
        {
            if(v[j].second > check)
                count--;
            check = min(check, v[j].second);
        }
        cout << count << endl;
    }
}
