//
//  10162_전자레인지.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/15.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int c1 = 0, c2 = 0, c3 = 0;
    int t;
    cin >> t;
    if((t%10) != 0)
    {
        cout << -1 << endl;
        return -1;
    }
    
    c1 = t/300;
    t -= c1*300;
    c2 = t/60;
    t -= c2*60;
    c3 = t/10;
    cout << c1 << " " << c2 << " " << c3 << endl;
    return 0;
}
