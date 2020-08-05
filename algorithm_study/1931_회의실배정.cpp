//
//  1931_회의실배정.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/08.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    else
    {
        return p1.second < p2.second;
    }
}

int main()
{
    int N, start = 0, end = 0, con_count = 0, pre_end = 0;
    pair<int, int> con;
    vector<pair<int, int> > time_table;

    cin >> N;
    for (int i = 0; i < N ; i++)
    {
        cin >> start >> end;
        con.first = start;
        con.second = end;
        time_table.push_back(con);
    }

    sort(time_table.begin(), time_table.end(), cmp);
    
    for(int i = 0; i < N; i++)
    {
        if(time_table[i].first >= pre_end)
        {
            con_count++;
            pre_end = time_table[i].second;
        }
    }
    
    cout << con_count << endl;
    return 0;
}
