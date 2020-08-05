//
//  14530_The Lost Cow.cpp
//  Virtual_Coding_Test
//
//  Created by KimJunsik on 2020/08/05.
//  Copyright © 2020 KimJunsik. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
  long long x, y;
  cin >> x >> y;

  long long dist = 0;
  long long step = 1;
  while(true)
  {
    if((x<=y && y<=x+step) || (x+step<=y && y<=x))
    {
      dist += abs(y-x);
      cout << dist << endl;
      break;
    }
    else
    {
      dist += abs(step*2);
      step *= -2;
    }
  }
}
