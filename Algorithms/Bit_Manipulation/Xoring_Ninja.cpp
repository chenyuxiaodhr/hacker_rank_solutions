// Just make all inputs or with each other. Then multipy it with 2^(n - 1).
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
        long n;
        cin >> n;

        unsigned long long int countor = 0;
        for (long j = 0; j < n; j++) {
            unsigned long long int m;
            cin >> m;
            countor |= m;
        }

        unsigned long long int mod = 1000000007;

        for (int j = 0; j < n - 1; j++) {
            countor = countor * 2 % mod;
        }


        cout << countor << endl;
    }

    return 0;
}

