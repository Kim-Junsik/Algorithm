//
//  7490_0만들기.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/24.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
int x;
void solve(int sum, int sign, int num, int k, string str)
{
    if (k == x)
    {
        sum += (num * sign);
        if (sum == 0)
        {
            cout << str << '\n';
        }
    }
    else
    {
        solve(sum, sign, num * 10 + (k + 1), k + 1, str + ' ' + char(k + 1 + '0'));
        solve(sum + (sign*num), 1, k + 1, k + 1, str + '+' + char(k + 1 + '0'));
        solve(sum + (sign*num), -1, k + 1, k + 1, str + '-' + char(k + 1 + '0'));
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        solve(0, 1, 1, 1, "1");
        printf("\n");
    }
    return 0;
}
