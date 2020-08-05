//
//  1449_수리공항승.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, L, input, start = 0, end = 0, num_tape = 0;
    cin >> N >> L;
    vector<int> pip;
    for (int i = 0 ; i < N; i++)
    {
        cin >> input;
        pip.push_back(input);
    }
    sort(pip.begin(), pip.end());
    
    start = pip[0];
    end = pip[0] + L;
    num_tape++;
    for(int i = 1; i < N ; i++)
    {
        if((pip[i] <= start) || (pip[i] >= end))
        {
            start = pip[i];
            end = pip[i]+L;
            num_tape++;
        }
    }
    cout << num_tape << endl;
    return 0;
}
