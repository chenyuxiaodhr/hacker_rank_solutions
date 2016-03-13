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
        unsigned long long int n;
        cin >> n;
        int move = 0;
        while (1) {
            if ((n & (n - 1)) == 0) {
                n /= 2;
            } else {
                unsigned long long int m = n;
                while ((m & (m - 1)) != 0) {m = m & (m - 1); }

                n -= m;
            }

            move++;
            if (n == 1) break;
        }

        if (move % 2 == 0) {
            cout << "Richard" << endl;
        } else {
            cout << "Louise" << endl;
        }
    }


    return 0;
}

