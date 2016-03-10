#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n >> k;

    bitset<2000000> b;
    cin >> b;

    bitset<1000000> s;

    if (k >= n) {
        cout << b[k + n - 2];
        s[0] = b[k + n - 2];
        for (int i = 1; i < n; i++) {
            s[i] = b[k + n - 2 - i] ^ b[k + n - 2 - i + 1];
            cout << s[i];
        }

        cout << endl;
    }  else {


        cout << b[k + n - 2];
        s[0] = b[k + n - 2];
        for (int i = 1; i < k; i++) {
            s[i] = b[k + n - 2 - i] ^ b[k + n - 2 - i + 1];
            cout << s[i];
        }

        for (int i = k; i < n; i++) {
            s[i] = b[k + n - 2 - i] ^ b[k + n - 2 - i + 1] ^ s[i - k];
            cout << s[i];
        }

        cout << endl;
    }


    return 0;
}

