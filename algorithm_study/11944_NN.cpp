//
//  11944_NN.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/11.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string n;
    int m;
    cin >> n >> m;
    
    int len = (int)n.length();
    int int_n = stoi(n);
    
    if(len*int_n > m)
    {
        for(int i = 0; i < m/len; i++)
        {
            cout << n;
        }
        for(int i = 0; i < m%len; i++)
        {
            cout << n[i];
        }
    }
    else
    {
        for(int i = 0; i < int_n; i++)
        {
            cout << n;
        }
    }
    cout << endl;
    return 0;
}
