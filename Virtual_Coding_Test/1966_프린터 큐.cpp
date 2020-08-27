//
//  1966_프린터 큐.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/27.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t_case, n, m, ord;
    cin >> t_case;
    for(int i = 0; i < t_case; i++)
    {
        cin >> n >> m;
        int count = 0;
        queue<pair<int, int> > q;
        vector<int> v;
        for(int j = 0; j < n; j++)
        {
            cin >> ord;
            q.push({ord, j});
            v.push_back(ord);
        }
        sort(v.begin(), v.end(), greater<int>());
        int idx = 0;
        while(!q.empty())
        {
            int order = q.front().first;
            int number = q.front().second;
            q.pop();
            if(v[idx] == order)
            {
                idx++;
                count++;
                if(number == m)
                {
                    cout << count << endl;
                    break;
                }
            }
            else
            {
                q.push({order, number});
            }
        }
        
    }
    return 0;
}
