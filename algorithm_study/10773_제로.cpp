//
//  10773_제로.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/15.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int k, value;
    long long sum=0;
    cin >> k;
    stack<int> st;
    
    for (int i = 0; i < k ; i++)
    {
        cin >> value;
        if(value == 0)
        {
            st.pop();
        }
        else
        {
            st.push(value);
        }
    }
    int size = (int)st.size();
    for(int i = 0 ; i < size; i++)
    {
        sum+=st.top();
        st.pop();
    }
    cout << sum << endl;
    return 0;
}
