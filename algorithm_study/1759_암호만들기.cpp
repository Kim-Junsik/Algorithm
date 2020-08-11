//
//  1759_암호만들기.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/08/03.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <map>
//using namespace std;
//
//vector<char> v_1, v_2;
//vector<string> result;
//map<string, bool> m;
//
//void password(int idx1, int idx2, int con, int col, int L, string passwd)
//{
//    if(passwd.length() == L && con>=2 && col>=1)
//    {
//        sort(passwd.begin(), passwd.end());
//        if(!m.count(passwd))
//        {
//            m[passwd] = true;
//            result.push_back(passwd);
//        }
//        return;
//    }
//    if(passwd.length() == L)
//    {
//        return;
//    }
//    for(int i = idx1+1; i < v_1.size(); i++)
//        password(i, idx2, con+1, col, L, passwd+v_1[i]);
//    for(int j = idx2+1; j < v_2.size(); j++)
//        password(idx1, j, con, col+1, L, passwd+v_2[j]);
//}
//
//int main()
//{
//    cin.tie(NULL); cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int L, c, con=0, col=0;
//    char ch;
//    cin >> L >> c;
//    for(int i = 0; i < c; i++)
//    {
//        cin >> ch;
//        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//            v_2.push_back(ch);
//        else
//            v_1.push_back(ch);
//    }
//    sort(v_1.begin(), v_1.end());
//    sort(v_2.begin(), v_2.end());
//
//    password(-1, -1,con, col, L, "");
//
//    sort(result.begin(), result.end());
//    string cur;
//    for(int i = 0; i < result.size(); i++)
//    {
//        cout << result[i] << endl;
//    }
//    return 0;
//}


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int L, c, con=0, col=0;
    char ch;
    cin >> L >> c;
    vector<char> v;
    vector<string> result;
    map<string, bool> m;
    string check;
    for(int i = 0; i < c; i++)
    {
        cin >> ch;
        v.push_back(ch);
    }
    sort(v.begin(), v.end());

    do
    {
        for(int i = 0; i < 4; i++)
        {
            if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
            {
                check.push_back(v[i]);
                col++;
            }
            else
            {
                check.push_back(v[i]);
                con++;
            }
        }

        if(con>=2 && col>=1)
        {
            sort(check.begin(), check.end());
            if(!m.count(check))
            {
                m[check] = true;
                result.push_back(check);
            }
        }
        check = "";
        col=0;
        con=0;
    }while(next_permutation(v.begin(), v.end()));

    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
