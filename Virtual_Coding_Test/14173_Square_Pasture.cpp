//
//  14173_Square_Pasture.cpp
//  virtual_coding_test
//
//  Created by KimJunsik on 2020/08/04.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x11, y11, x12, y12, x21, y21, x22, y22;
    cin >> x11 >> y11 >> x12 >> y12;
    cin >> x21 >> y21 >> x22 >> y22;
    int cur_x1, cur_y1, cur_x2, cur_y2;
    cur_x1 = min(x11, x21);
    cur_x2 = max(x12, x22);
    cur_y1 = min(y11, y21);
    cur_y2 = max(y12, y22);
    int out = max((cur_x2 - cur_x1), (cur_y2 - cur_y1));
    cout << (out * out) << endl;
}
