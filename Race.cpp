// Problem Link:-https://codeforces.com/problemset/problem/2112/A

#include <bits/stdc++.h>
using namespace std;

// check if Bob can always reach faster than Alice
bool win(int a, int x, int y) {
    for (int b = 1; b <= 100; ++b) {
        if (b == a) continue; // Bob can't start where Alice is

        // check both prize positions
        if (abs(b - x) < abs(a - x) && abs(b - y) < abs(a - y)) {
            return true; // Bob is closer in both cases
        }
    }
    return false; // no such position found
}

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y; // input positions

        // print result
        cout << (win(a, x, y) ? "YES\n" : "NO\n");
    }
    return 0;
}
