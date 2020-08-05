//
//  15708_미네크래프트.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/14.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, t, p, input=0, count = 0, out=0;
    long long sum=0;
    cin >> n >> t >> p;
    priority_queue<int> k;
    for(int i = 0; i < n; i++)
    {
        if ((t - (i*p)) < 0)
        {
            break;
        }
        cin >> input;
        sum+=input;
        count++;
        k.push(input);
        while(sum > (t-(i*p)))
        {
            sum-=k.top();
            count--;
            k.pop();
        }
        out = max(out, count);
    }
    cout << out << endl;
    return 0;
}
