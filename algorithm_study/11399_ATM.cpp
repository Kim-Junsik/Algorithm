//
//  11399_ATM.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/08.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, time, sum = 0;
    cin >> N;
    
    vector<int> atm_time;
    for (int i = 0; i < N; i++)
    {
        cin >> time;
        atm_time.push_back(time);
    }
    
    sort(atm_time.begin(), atm_time.end());
    
    for (int i = 0; i < N-1; i++)
    {
        atm_time[i+1]+=atm_time[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        sum+=atm_time[i];
    }
    
    cout << sum << endl;
    return 0;
}
