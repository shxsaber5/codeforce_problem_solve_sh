//Problem Link : https://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        if (n % 10 != 0)
            n = n - 1;
        else
            n = n / 10;
    }
    cout << n << endl;
    
    return 0;
}
