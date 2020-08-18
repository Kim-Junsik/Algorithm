//
//  1019_책페이지.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/17.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;
long long ans[10];
void calc(long long n, long long ten)
{
    while (n > 0)
    {
        ans[n%10] += ten;
        n = n/10;
    }
}
int main()
{
    long long start=1;
    long long end;
    long long ten=1;
    cin >> end;
    while (start <= end)
    {
        while (start % 10 != 0 && start <= end)
        {
            calc(start,ten);
            start++;
        }
        if (start > end) break;
        while (end % 10 != 9 && start <= end)
        {
            calc(end,ten);
            end--;
        }
        long long cnt = (end/10 - start/10 + 1);
        for (int i=0; i<=9; i++)
        {
            ans[i] += cnt*ten;
        }
        start/=10;
        end/=10;
        ten*=10LL;
    }
    
    for (int i=0; i<=9; i++)
    {
        cout << ans[i] << ' ';
    }
    cout << '\n';
    return 0;
}
