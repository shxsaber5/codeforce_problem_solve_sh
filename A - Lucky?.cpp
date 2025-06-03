// Problem Link:https://codeforces.com/contest/1676/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string tic;
        cin >> tic;
        int sum1 = tic[0] - '0' + tic[1] - '0' + tic[2] - '0';
        int sum2 = tic[3] - '0' + tic[4] - '0' + tic[5] - '0';
 
        if (sum1 == sum2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
