//
//  9095_1,2,3더하기.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/20.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n;

int dfs(int one, int two, int three, int cur)
{
    int count = 0;
    if(cur == n)
        return 1;
    else if(cur > n)
        return 0;
    else
    {
        count += dfs(one+1, two, three, cur+1);
        count += dfs(one, two+1, three, cur+2);
        count += dfs(one, two, three+1, cur+3);
        return count;
    }
}

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
//    vector<int> v(t);
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        cout << dfs(0,0,0,0) << endl;
    }
    return 0;
}
