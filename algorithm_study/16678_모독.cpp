//
//  16678_모독.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/09.
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
    
    int N, Defile = 1;
    int J = 0;
    cin >> N;
    vector<int> honor(N);
    for (int i = 0; i < N; i++)
    {
        cin >> honor[i];
    }
    
    sort(honor.begin(), honor.end());
    
    for(int i = 0; i < N; i++)
    {
        if(honor[i] >= Defile)
        {
            J += (honor[i] - Defile);
            Defile++;
        }
    }
    cout << J << endl;
    return 0;
}
