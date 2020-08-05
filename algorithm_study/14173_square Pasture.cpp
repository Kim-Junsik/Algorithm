//
//  14173_square Pasture.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/20.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x11, x12, x21, x22, y11, y12, y21, y22;
    cin >> x11 >> y11 >> x12 >> y12;
    cin >> x21 >> y21 >> x22 >> y22;
    
    int min_x = min(x11, x21);
    int max_x = max(x12, x22);
    int min_y = min(y11, y21);
    int max_y = max(y12, y22);
    int l = max((max_x - min_x),(max_y - min_y));
    cout << l*l << endl;
    return 0;
}
