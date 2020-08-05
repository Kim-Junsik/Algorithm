//
//  main.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/05.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    vector<pair<int, int> > v(3);
    for(int i = 0; i< 3; i++)
    {
        cin>> v[i].first >> v[i].second;
    }
    
    for(int i = 0; i < 100; i++)
    {
        if(v[i%3].second + v[(i+1)%3].second > v[(i+1)%3].first)
        {
            v[i%3].second -= (v[(i+1)%3].first - v[(i+1)%3].second);
            v[(i+1)%3].second = v[(i+1)%3].first;
        }
        else
        {
            v[(i+1)%3].second += v[i%3].second;
            v[i%3].second=0;
        }
    }
    
    cout << v[0].second << endl << v[1].second << endl << v[2].second << endl;
    return 0;
}
