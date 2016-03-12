#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> g_a[1001];
vector<int> g_r(1001, -1);
queue<int> g_q;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        for (int j = 0; j < m; j++) {
            int a,b;
            cin >> a >> b;

            g_a[a].push_back(b);
            g_a[b].push_back(a);
        }
        int s;
        cin >> s;
        g_r[s] = 0;
        g_q.push(s);

        while (!g_q.empty()) {
            int a = g_q.front();
            for (int i = 0; i < g_a[a].size(); i++) {
                if (g_r[g_a[a][i]] == -1) {
                    g_r[g_a[a][i]] = g_r[a] + 1;
                    g_q.push(g_a[a][i]);
                }
            }

            g_q.pop();
        }



        for (int i = 1; i <= n; i++) {
            if (i == s) continue;
            cout << (g_r[i] == -1 ? -1 : g_r[i] * 6) << " ";
        }

        cout << endl;

        for (int i = 1; i <= n; i++) {
            g_a[i].clear();
            g_r[i] = -1;
        }


    }
    return 0;
}

