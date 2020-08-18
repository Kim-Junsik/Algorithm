//
//  10819_차이를 최대로.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/18.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, sum=0, check=0;
    cin >> n;
    vector<int> v(n);
    deque<int> dq;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    do
    {
        check = 0;
        for(int i = 0; i < n-1; i++)
        {
            check+=abs(v[i]-v[i+1]);
        }
        sum = max(sum, check);
    }while(next_permutation(v.begin(), v.end()));
    
    cout << sum << endl;
    return 0;
}
