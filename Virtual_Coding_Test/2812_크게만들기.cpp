//
//  2812_크게만들기.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<char> v;
    
    for(int i = 0; i < (int)str.length(); i++)
    {
        while(k && (!v.empty()) && (v.back() < str[i]))
        {
            v.pop_back();
            k--;
        }
        v.push_back(str[i]);
    }
    
    for(int i = 0; i < (v.size() - k) ; i++)
    {
        cout << v[i];
    }
    
    return 0;
}

