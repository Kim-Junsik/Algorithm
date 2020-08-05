//
//  13164_행복 유치원.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/09.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int N, K, sum = 0;
    cin >> N >> K;
    vector<int> child(N);
    vector<int> tall(N);
    for (int i = 0; i < N; i++)
    {
        cin >> child[i];
    }
    for (int i = 0; i < N-1; i++)
    {
        tall[i] = child[i+1]-child[i];
    }
    sort(tall.begin(), tall.end(), cmp);
    
    for (int i = K-1; i<tall.size(); i++)
    {
        sum += tall[i];
    }
    
    cout << sum << endl;
    return 0;
}
