//
//  15708_미네크래프트.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/05.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n,t,p, cur_time=0, sum_time=0;
    cin >> n >> t >> p;
    vector<int> v(n);
    priority_queue<int> q;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        if(t-(i*p) < 0)
        {
            break;
        }
        else
        {
            cur_time = t-(i*p);
            q.push(v[i]);
            sum_time += v[i];
            if(sum_time > cur_time)
            {
                sum_time -= q.top();
                q.pop();
            }
        }
    }
    cout << q.size() <<endl;
    return 0;
}
