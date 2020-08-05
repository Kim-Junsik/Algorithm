//
//  10448_유레카 이론.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/14.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void make_eureka(vector<int> &eureka)
{
    int N = 1;
    while ((N)*(N + 1) / 2 < 1000)
    {
         eureka.push_back(N*(N + 1) / 2);
         N++;
    }
}

int check_triangle(vector<int> &eureka, int value)
{
    for(int i = 0; i < eureka.size(); i++)
    {
        for(int j = 0; j < eureka.size(); j++)
        {
            for(int k = 0; k < eureka.size(); k++)
            {
                    if(eureka[i] + eureka[j] + eureka[k] == value)
                        return 1;
            }
        }
    }
    return 0;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t, value;
    cin >> t;
    int check = 0;
    vector<int> eureka;
    make_eureka(eureka);
    for(int i = 0; i < t ; i++)
    {
        cin >> value;
        check = check_triangle(eureka, value);
        cout << check << endl;
    }
    return 0;
}
