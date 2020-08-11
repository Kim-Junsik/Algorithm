//
//  1213_팰린드롬만들기.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/11.
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
    
    string st;
    cin >> st;
    vector<int> name(26);
    char odd=0;
    vector<char> palin;
    
    for(int i = 0; i < st.length(); i++)
    {
        name[st[i]-'A']++;
    }
    
    int count = 0;
    for(int i = 0; i < 26; i++)
    {
        if(name[i]%2 == 1)
        {
            odd = i+'A';
            count++;
        }
    }
    
    if(count > 1)
    {
        cout << "I'm Sorry Hansoo" << endl;
        return 0;
    }
    else
    {
        for(int i = 0; i < 26; i++)
        {
            for(int j = 0; j < name[i]/2; j++)
            {
                palin.push_back(i+'A');
            }
        }
        
        if(odd != 0)
            palin.push_back(odd);
        
        for(int i = 25; i >= 0; i--)
        {
            for(int j = 0; j < name[i]/2; j++)
            {
                palin.push_back(i+'A');
            }
        }
    }
    
    for(int i = 0; i < palin.size(); i++)
    {
        cout << palin[i];
    }
    cout << endl;
    return 0;
}
