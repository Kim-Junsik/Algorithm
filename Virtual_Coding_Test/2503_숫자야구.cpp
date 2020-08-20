//
//  2503_숫자야구.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/20.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t, number=0;
    cin >> t;
    vector<pair<int, pair<int, int> > >v;
    
    for(int i = 0; i < t; i++)
    {
        int input, s, b;
        cin >> input >> s >> b;
        v.push_back({input, {s, b}});
    }
    
    int check[3] = {0,};
    int cur[3] = {0,};
    
    for (int i = 123; i <= 987; i++) {
        int count = 0;
        check[0] = i/100;
        check[1] = i/10%10;
        check[2] = i%10;
        if (check[1] == 0 || check[2] == 0 || check[0] == check[1] || check[1] == check[2] || check[2] == check[0])
            continue;
        
        for (int j = 0; j < t; j++)
        {
            int s = 0, b = 0, t = v[j].first;
            cur[0] = t/100;
            cur[1] = t/10%10;
            cur[2] = t%10;
            
            for (int k = 0; k < 3; k++)
            {
                if (check[k] == cur[k])
                    s++;
                if (check[k] == cur[(k+1)%3] || check[k] == cur[(k+2)%3])
                    b++;
            }
            
            if (s == v[j].second.first && b == v[j].second.second)
                count++;
        }
        if (count == t)
            number++;
    }
    cout << number << endl;
    return 0;
}

