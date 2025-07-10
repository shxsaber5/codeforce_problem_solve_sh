Problem Link:-https://codeforces.com/contest/1374/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        int steps = 0;

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                steps++;
            } else if (n % 3 == 0) {
                n *= 2;
                steps++;
            } else {
                steps = -1;
                break;
            }
        }

        cout << steps << endl;
    }

    return 0;
}
