//
//  2217_로프.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/05.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, k=1, max_w=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end(), greater<int>());
    
    for(int i = 0; i < n; i++)
    {
        max_w = max(max_w, v[i]*k);
        k++;
    }
    cout << max_w <<endl;
    return 0;
}
