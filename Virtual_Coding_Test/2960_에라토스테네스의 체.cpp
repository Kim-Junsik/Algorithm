//
//  2960_에라토스테네스의 체.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/24.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

bool Eratos[1001];

int find_num(int n, int k)
{
    int count = 0, check = 0;
    bool flag = false;
    for(int i = 2; i <= n; i++)
    {
        Eratos[i] = true;
    }
    
    for(int i = 2; i*i <= n; i++)
    {

        for (int j = i; j <= n; j += i)
        {
            if (Eratos[j])
            {
                Eratos[j] = false;
                count++;
                check = j;
            }
            if(count == k)
            {
                flag = true;
                break;
            }
        }
        
        if(flag)
            break;
    }
    return check;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << find_num(n, k) << endl;
    return 0;
}
