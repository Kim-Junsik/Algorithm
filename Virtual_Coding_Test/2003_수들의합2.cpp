//
//  2003_수들의합2.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/25.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long n, m, sum = 0, count = 0;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            sum+=v[j];
            if(sum == m)
            {
                count++;
                break;
            }
        }
        sum = 0;
    }
    
    cout << count << endl;
    return 0;
}
