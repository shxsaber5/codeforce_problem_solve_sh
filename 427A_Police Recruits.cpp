Problem Link:https://codeforces.com/problemset/problem/427/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int event;
    int officers = 0;
    int crimes = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> event;
        if (event == -1) {
            if (officers > 0) {
                officers--;  
            } else {
                crimes++;    
            }
        } else {
            officers += event;  
        }
    }
 
    cout << crimes << endl;
    return 0;
}
