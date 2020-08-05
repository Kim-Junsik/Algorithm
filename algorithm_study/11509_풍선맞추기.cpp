//
//  11509_풍선맞추기.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int N, input = 0, num_dart = 0;
    cin >> N;
    int Hs[1000001] = {0,};
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(Hs[input+1] == 0)
        {
            Hs[input]++;
            num_dart++;
        }
        else
        {
            Hs[input+1]--;
            Hs[input]++;
        }
    }
    cout << num_dart << endl;
    return 0;
}
