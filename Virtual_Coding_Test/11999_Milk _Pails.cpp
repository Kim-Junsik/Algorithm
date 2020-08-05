//
//  11999_Milk _Pails.cpp
//  virtual_coding_test
//
//  Created by KimJunsik on 2020/08/04.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x, y, m, out=0;
    cin >> x >> y >> m;
    
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            if((i*x+j*y) <= m)
                out = max(out, (i*x+j*y));
        }
    }
    cout << out << endl;
    return 0;
}
