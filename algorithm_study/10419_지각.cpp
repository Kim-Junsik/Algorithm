//
//  10419_지각.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/13.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int T;
    cin >> T;
    vector<int> d(T);
    for (int i = 0; i < T; i++)
    {
        cin >> d[i];
    }
    
    for(int i = 0; i < T; i++)
    {
        for(int j = 0; j <= 10000; j++)
        {
            if((j*j + j)>d[i])
            {
                cout << (j-1) << endl;
                break;
            }
        }
    }
    return 0;
}
