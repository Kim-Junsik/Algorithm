//
//  18228_펭귄추락.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    long long A = 0;
    long long sum = 0;
    long long min = 1000000000;
    
    cin >> N;
    for (int i = 0; i < N ; i++)
    {
        cin>>A;
        if(A == -1)
        {
            sum+=min;
            min = 1000000000;
        }
        else
        {
            if(A<min)
                min = A;
        }
    }
    cout << sum+min << endl;
    return 0;
}
