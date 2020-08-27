//
//  1620_나는야 포켓몬 마스터 이다솜.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/27.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <cstdio>
#include <string.h>
 
using namespace std;
 
int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k;
    char tmp[22];
    string str;
    scanf("%d %d", &n, &k);
    map<string, int> m1;
    map<int, string> m2;
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", tmp);
        m1[tmp] = i;
        m2[i] = tmp;
    }
 
    for (int i = 0; i < k; i++)
    {
        scanf("%s", tmp);
        str = tmp;
        if (48 <= tmp[0] && tmp[0] <= 57)
            printf("%s\n", m2[atoi(tmp)].c_str());
        else
            printf("%d\n", m1[str.c_str()]);
    }
}
