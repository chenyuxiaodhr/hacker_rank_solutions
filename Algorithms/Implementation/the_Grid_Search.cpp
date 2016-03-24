#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  for(int a0 = 0; a0 < t; a0++){
    int R;
    int C;
    cin >> R >> C;
    vector<string> G(R);
    for(int G_i = 0;G_i < R;G_i++){
      cin >> G[G_i];
    }
    int r;
    int c;
    cin >> r >> c;
    vector<string> P(r);
    for(int P_i = 0;P_i < r;P_i++){
      cin >> P[P_i];
    }

    bool result = false;

    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        if (G[i][j] == P[0][0] && R - i >= r && C - j >= c) {
          result = true;
          for (int x = 0; x < r; x++) {
            for (int y = 0; y < c; y++) {
              if (G[x + i][y + j] != P[x][y]) {

                result = false;
                break;
              }

            }
            if (!result) break;
          }
        }

        if (result) break;

      }

      if (result) break;
    }

    result ? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}
