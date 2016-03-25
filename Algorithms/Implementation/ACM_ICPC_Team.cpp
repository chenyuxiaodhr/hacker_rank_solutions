#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  int m;
  cin >> n >> m;
  vector<string> topic(n);
  for(int topic_i = 0;topic_i < n;topic_i++){
    cin >> topic[topic_i];
  }

  int result = 0;
  int top = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int k = 0;
      for (int l = 0; l < m; l++) {
        if ((topic[i][l] | topic[j][l]) == '1') k++;
      }

      if (k > top) {
        result = 1;
        top = k;
      } else if (k == top) {
        result++;
      }
    }
  }

  cout << top << endl << result << endl;
  return 0;
}

