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

        long long int a1;
        cin >> a1;
        bool flag = a1 >= 0 ? true : false;
        vector<long long int> pos;
        vector<long long int> neg;
        if (flag) pos.push_back(a1);
        else neg.push_back(a1);
        int x = 0;
        int y = 0;
        long long int big = a1;

        for (int j = 1; j < n; j++) {
            long long int a;
            cin >> a;

            big = max(big, a);
            if (flag) {
                if (a >= 0) {
                    pos[x] += a;
                } else {
                    flag = false;
                    neg.push_back(a);

                    x++;
                }
            } else {
                if (a < 0) {
                    neg[y] += a;
                } else {
                    flag = true;
                    pos.push_back(a);

                    y++;
                }
            }
        }

        long long int con = pos.empty() ? big : pos[0];

        long long int uncon = pos.empty() ? big : pos[0];

        if (!pos.empty()) {
            long long int temp = con;

            for (int j = 1; j < pos.size(); j++) {
                int m = a1 >= 0 ? j - 1 : j;

                temp = max(neg[m], temp + neg[m]);
                con = max(con, temp);

                temp = max(pos[j], temp + pos[j]);
                con = max(con, temp);


                uncon += pos[j];
            }
        }





        cout << con << " " << uncon << endl;
    }
    return 0;
}

