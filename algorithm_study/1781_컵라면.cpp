//
//  1781_컵라면.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/18.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, d, c, p=-1, count=0;
    cin >> n;
    vector<pair<int, int> > v(n);
    priority_queue<int, vector<int>, greater<int> > q;
    
    for(int i = 0; i < n; i++)
    {
        cin >> d >> c;
        v[i] = make_pair(d, c);
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < n; i++)
    {
        p=v[i].first;
        q.push(v[i].second);
        
        while(p < q.size())
            q.pop();
    }
    
    while(!q.empty())
    {
        count+=q.top();
        q.pop();
    }
    cout << count << endl;
    return 0;
}
