// Problem Link:-https://codeforces.com/contest/1903/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n), sorted_a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sorted_a[i] = a[i];
        }
        
        sort(sorted_a.begin(), sorted_a.end());
        
        if (k == 1) {
            if (a == sorted_a) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
