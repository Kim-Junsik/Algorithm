//
//  13458_시험감독.cpp
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

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long n, b, c;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> b >> c;
    
    long long count = 0;
    for(int i = 0; i < n; i++)
    {
        v[i]-=b;
        count++;
        if(v[i] > 0)
        {
            count+=v[i]/c;
            if(v[i]%c != 0)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
