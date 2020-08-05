//
//  15734_명장 남정훈.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/13.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int L, R, A;
    cin >> L >> R >> A;
    if(R == L)
    {
        cout << 2*(R + (A/2)) << endl;
    }
    else if(L<R)
    {
        if((L+A) > R)
        {
            cout << 2*(R + ((A-(R-L))/2)) << endl;
        }
        else
        {
            cout << 2*(L+A) <<  endl;
        }
    }
    else
    {
        if((R+A) > L)
        {
            cout << 2*(L + ((A-(L-R))/2)) << endl;
        }
        else
        {
            cout << 2*(R+A) <<  endl;
        }
    }
    return 0;
}
