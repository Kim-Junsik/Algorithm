//
//  1934_최소공배수.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/20.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>

using namespace std;

int GCM(int c1, int c2)
{
    int r = c1%c2;
    while(r!=0)
    {
        c1 = c2;
        c2 = r;
        r = c1%c2;
    }
    return c2;
}

int LCM(int c1, int c2)
{
    int G = GCM(c1, c2);
    return c1*c2/G;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, c1, c2, L=0;
    cin >> n;
    
    for(int i = 0; i < n ; i++)
    {
        cin >> c1 >> c2;
        if(c1 == 1)
            cout << c2 << endl;
        else if(c2 == 1)
            cout << c1 << endl;
        else
        {
            L =LCM(c1, c2);
            cout << L << endl;
        }
    }
    return 0;
}
