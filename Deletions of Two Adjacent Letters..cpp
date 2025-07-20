// Problem Link:-https://codeforces.com/problemset/problem/1650/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        char c;
        cin >> s >> c;
 
        bool ok = false;
        int n = s.size();
 
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                int left = i;
                int right = n - i - 1;
                if (left % 2 == 0 && right % 2 == 0) {
                    ok = true;
                    break;
                }
            }
        }
 
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
 
    return 0;
}
