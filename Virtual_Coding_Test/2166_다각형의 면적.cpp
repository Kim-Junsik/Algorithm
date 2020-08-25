//
//  2166_다각형의 면적.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/25.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<pair<long long, long long> > v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    
    v.push_back({v[0].first, v[0].second});
    
    long long left_sum = 0, right_sum = 0;
    for(int i = 0; i < n; i++)
    {
        left_sum += (v[i].first * v[i+1].second);
        right_sum += (v[i].second * v[i+1].first);
    }
    
    long long out = (left_sum - right_sum);
    if(out < 0)
        out *= -1;
    cout<< out/2;
    if(out%2 != 0)
        cout << "." << 5 << endl;
    else
    {
        cout << ".0" << endl;
    }
    return 0;
}
