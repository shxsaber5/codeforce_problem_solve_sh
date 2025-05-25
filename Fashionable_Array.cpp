// Problem Link :- https://codeforces.com/contest/2110/problem/A 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        sort(a.begin(), a.end());

        int max_size = 1; // minimum subset size 1
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int mn = a[i];
                int mx = a[j];
                if ((mn + mx) % 2 == 0) {
                    int size = j - i + 1;
                    if (size > max_size) 
                        max_size = size;
                }
            }
        }

        cout << n - max_size << "\n";
    }

    return 0;
}
