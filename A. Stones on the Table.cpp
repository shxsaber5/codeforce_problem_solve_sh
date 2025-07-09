// Problem link: https://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int remove = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            remove++;
        }
    }

    cout << remove << endl;
    return 0;
}
