// Problem Link:-https://codeforces.com/problemset/problem/1759/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string full = "";
    for (int i = 0; i < 20; i++){
        full += "Yes";
    } 

    while (t--) {
        string s;
        cin >> s;

        int found = 0;
        for (int i = 0; i <= full.size() - s.size(); i++){
            int match = 1;
            for (int j = 0; j < s.size(); j++){
                if (full[i + j] != s[j]){
                    match = 0;
                    break;
                }
            }
            if (match) {
                found = 1;
                break;
            }
        }

        if (found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
