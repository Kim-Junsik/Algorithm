//
//  16779_The Bucket List.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/03.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, s,t,b, bucket=0;
    cin >> n;
    vector<int> time(1000);
    for(int i = 0; i < n ; i++)
    {
        cin >> s >> t >> b;
        for(int j = s; j <=t; j++)
        {
            time[j-1]+=b;
        }
    }
    
    for(int i = 0; i < 1000; i++)
    {
        bucket = max(bucket, time[i]);
    }
    
    cout << bucket << endl;
    
    return 0;
}
