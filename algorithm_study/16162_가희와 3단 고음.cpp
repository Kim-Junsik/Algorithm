//
//  16162_가희와 3단 고음.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/10.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, A, D;
    cin >> N >> A >> D;
    vector<int> treble(N);
    int octav = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> treble[i];
    }
    
    for(vector<int>::iterator iter = treble.begin(); iter != treble.end(); iter++)
    {
        if((A + octav*D) == *iter)
        {
            octav++;
        }
    }
    cout << octav << endl;
    return 0;
}
