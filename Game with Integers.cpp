// Problem Link:-https://codeforces.com/contest/1899/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }

    return 0;
}
