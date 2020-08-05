//
//  15419_Frosting on the Cake.cpp
//  virtual_coding_test
//
//  Created by KimJunsik on 2020/08/04.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<long long> x(n), y(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    
    long long xx[3] = {0,};
    for(int i = 0; i < n; i++)
    {
        xx[i%3] += x[i];
    }
    
    deque<long long> out(3);
    for(int j = 0; j < n; j++)
    {
        out[0] += xx[0]*y[j];
        out[1] += xx[1]*y[j];
        out[2] += xx[2]*y[j];
        
        out.push_back(out[0]);
        out.pop_front();
    }
    
    cout <<out[0] << " " << out[1] << " " << out[2] << endl;
    return 0;
}
