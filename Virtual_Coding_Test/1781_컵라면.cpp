//
//  main.cpp
//  virtual_coding_test
//
//  Created by KimJunsik on 2020/08/04.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, line = 0, out = 0;
    cin >> n;
    vector<pair<int, int> > v(n);
    priority_queue<int, vector<int>, greater<int> > ramen;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < n; i++)
    {
        line = v[i].first;
        ramen.push(v[i].second);
        while(line < ramen.size())
            ramen.pop();
    }
    
    int size = ramen.size();
    for(int i = 0; i < size; i++)
    {
        out += ramen.top();
        ramen.pop();
    }
    cout << out<< endl;
    return 0;
}
