//
//  2447_별찍기.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/03.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

void print_star(int x, int y)
{
    while(x != 0)
    {
        if(x%3 == 1 && y%3 == 1)
        {
            cout << " ";
            return;
        }
        x /= 3;
        y /= 3;
    }
    cout << "*";
    return;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    for(int i= 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            print_star(i,j);
        }
        cout << endl;
    }
    return 0;
}
