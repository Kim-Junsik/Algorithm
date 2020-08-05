//
//  2217_로프.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/10.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    vector<int> rope(N);
    int k = 1, max = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> rope[i];
    }
    
    sort(rope.begin(), rope.end());
    for(int i = (int)(rope.size()-1); i >=0 ; i--)
    {
        if(max < rope[i]*k)
        {
            max = rope[i]*k;
        }
        k++;
    }
    
    cout << max << endl;
    return 0;
}
