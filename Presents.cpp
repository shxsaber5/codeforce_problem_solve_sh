// Problem Link:-https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}
