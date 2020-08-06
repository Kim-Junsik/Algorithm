//
//  15593_Lifeguards_(Bronze).cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second< p2.second;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, out=0, cur = 0;
    cin >> n;
    vector<pair<int, int> > v(n);
    int guard[1000] = {0,};
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        for(int j = v[i].first; j < v[i].second; j++)
        {
            guard[j]++;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = v[i].first; j < v[i].second; j++)
        {
           guard[j]--;
        }
        
        for(int j = 0; j < 1000; j++)
        {
            if(guard[j] > 0)
                cur++;
        }
        
        out = max(out, cur);

        for(int j = v[i].first; j < v[i].second; j++)
        {
           guard[j]++;
        }
        cur = 0;
    }
    
    cout << out << endl;
    return 0;
}
