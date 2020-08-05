//
//  2812_크게만들기2.cpp
//  algorithm_study
//
//  Created by KimJunsik on 2020/07/22.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[500001];
int ans[500001];
int n, k, top=0;
int main()
{
   char tmp;
   cin >> n >> k;
   for (int i = 0; i < n; i++) {
      cin >> tmp;
      arr[i] = tmp;
   }
   
   for (int i = 0; i < n; i++) {
      while (ans[top - 1] < arr[i] && k>0 && top > 0) {
         k--;
         top--;
      }
      ans[top++] = arr[i];
   }
   top -= k;
   for (int i = 0; i < top; i++) {
      cout << ans[i] - 48;
   }
}
