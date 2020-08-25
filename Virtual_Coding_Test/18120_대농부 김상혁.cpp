//
//  18120_대농부 김상혁.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/25.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
bool comp(pair<double, int>p1, pair<double, int>p2)
{
    if(p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first < p2.first;
}
int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);
 
    int n, a;
    cin >> n >> a;
    double temp = 0;
    double w_sum = 0;
    
    vector<pair<double, int>>v(n);
 
    for(int i = 0; i < n; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        v[i].first = sqrt(x*x + y*y);
        v[i].second = w;
        temp += w*sqrt(x*x + y*y);
        w_sum += w;
    }
    
    sort(v.begin(), v.end(), comp);
    double check = pow(w_sum, 2) / (4 * a) - temp;
 
    w_sum = 0;
    temp = 0;
    double r = 0;
    for(int i = 0; i < n; i++)
    {
        double total_r = w_sum / (2 * a);
        if (r <= total_r &&  total_r<= v[i].first)
        {
            check = max(-a*total_r*total_r + total_r*w_sum - temp, check);
        }
 
        r = v[i].first;
        w_sum += v[i].second;
        temp += v[i].first*v[i].second;
        check = max((-a)*r*r + r*w_sum - temp, check);
    }
 
    cout << fixed;
    cout.precision(6);
    if (check < 0)
        cout << 0;
    else cout << check;
}
