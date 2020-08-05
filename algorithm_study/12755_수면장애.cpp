//
//  12755_수면장애.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/21.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define max 100000000
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<int> num;
    int num_i=9, num_k=0, sum=0, pre_sum=0;
    while (sum < n) {
        num_k++;
        pre_sum = sum;
        sum += num_i * num_k;
        num_i *= 10;
    }
    int idx = n-pre_sum-1;
    
    long long out = 1;
    for(int i = 0; i < num_k-1; i++)
        out*=10;
    out+=(idx/num_k);
    
    string s = to_string(out);
    cout << s[idx%num_k] << endl;
}
