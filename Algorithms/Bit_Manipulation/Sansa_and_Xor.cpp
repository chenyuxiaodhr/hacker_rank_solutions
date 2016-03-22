#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
      int n;
      cin >> n;
      int result = 0;
      for (int j = 0; j < n; j++) {
          int m;
          cin >> m;

          if (n % 2 != 0 && j % 2 == 0) result ^= m;
      }


      cout << result << endl;
  }
  return 0;
}

