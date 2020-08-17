//
//  1547_공.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/17.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int m, x, y, cur = 1;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        if(x == cur)
            cur = y;
        else if(y == cur)
            cur = x;
    }
    cout << cur << endl;
    return 0;
}
