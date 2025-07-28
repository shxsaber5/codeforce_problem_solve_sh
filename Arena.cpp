// Problem Link:-https://codeforces.com/problemset/problem/1487/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n; // number of heroes
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i]; // hero levels
        }

        int mn = *min_element(a.begin(), a.end()); // smallest level
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > mn) cnt++; // count higher than min
        }

        cout << cnt << '\n'; // possible winners
    }

    return 0;
}

