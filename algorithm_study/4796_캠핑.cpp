//
//  4796_캠핑.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/06.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int L, P, V, camp = 0, count = 1;
    while(true)
    {
        cin >> L >> P >> V;
        if(!L && !P && !V)
            break;
        else
        {
            camp += (V/P)*L;
            if((V%P) > L)
            {
                camp += L;
            }
            else
            {
                camp += (V%P);
            }
        }
        cout << "Case " << count << ": " << camp << endl;
        count++;
        camp = 0;
    }
}
