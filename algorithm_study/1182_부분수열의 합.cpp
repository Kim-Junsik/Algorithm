//
//  1182_부분수열의 합.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/30.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, s, sum=0, count=0;;
    cin >> n >> s;
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
            if(sum == s)
                count++;
        }
        sum=0;
    }
    cout << count << endl;
    return 0;
}
