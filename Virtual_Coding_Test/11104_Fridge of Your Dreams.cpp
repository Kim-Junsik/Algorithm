//
//  main.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    char v[24];
    for(int i = 0; i < n; i++)
    {
        cin >> v;
        int result = 0, mul = 1;
        for(int j = 23; j >= 0; j--)
        {
            if((v[j]-48) == 1)
            {
                result += mul;
            }
            mul*=2;
        }
        cout << result << endl;
    }

    return 0;
}
