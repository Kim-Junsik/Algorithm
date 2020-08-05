//
//  14457_Cow Tripping.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/03.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr [10][10];

int main()
{
    int n, count=0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
    }
    
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = n-1; j >= 0; j--)
        {
            if(arr[i][j] == '1')
            {
                for(int a = 0; a <= i ; a++)
                {
                    for(int b = 0; b <= j; b++)
                    {
                        if(arr[a][b] == '0')
                            arr[a][b] = '1';
                        else
                            arr[a][b]='0';
                    }
                }
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
