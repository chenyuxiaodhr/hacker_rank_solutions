#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    map<string, int> m;

    for (int j = 0; j < s.size(); j++) {
      for (int l = 1; l + j - 1 < s.size(); l++) {
        string sub = s.substr(j, l);
        sort(sub.begin(), sub.end());

        m[sub]++;
      }
    }
    long long int result = 0;
    for (auto it = m.begin(); it != m.end(); ++it) {
      result += (long long)(it->second) * (long long)(it->second - 1) / 2;
    }


    cout << result << endl;

  }
  return 0;
}

