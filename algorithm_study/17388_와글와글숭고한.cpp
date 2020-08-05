//
//  17388_와글와글숭고한.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int S, K, H;
    cin >> S >> K >> H;
    if((S+K+H) >= 100)
        cout << "OK" << endl;
    else
    {
        if((S < K) && (S < H))
            cout << "Soongsil" << endl;
        else if((K < S) && (K < H))
            cout << "Korea" << endl;
        else
            cout << "Hanyang" << endl;
    }
    return 0;
}
