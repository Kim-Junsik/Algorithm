//
//  2747_피보나치 수.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/26.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned int arr[46] = {0,1,};
    for(int i = 2; i < 46; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n] << endl;
    return 0;
}
