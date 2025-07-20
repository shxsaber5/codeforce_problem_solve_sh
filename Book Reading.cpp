// Problem Link:-https://codeforces.com/problemset/problem/884/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t;
    cin >> n >> t;
 
    for (int i = 0; i < n; i++) {
        int work_time;
        cin >> work_time;
        t -= (86400 - work_time);
        if (t <= 0) {
            cout << i + 1;
            break;
        }
    }
 
    return 0;
}
