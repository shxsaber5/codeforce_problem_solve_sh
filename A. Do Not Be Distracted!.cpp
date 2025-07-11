// Problem Link:- https://codeforces.com/contest/1520/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;

        string dharabahik = "";
        char ch = '@';

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ch)
            {
                dharabahik += s[i];
            }
            ch = s[i];
        }

        int freq[26] = {0};
        for (int i = 0; i < dharabahik.size(); i++)
        {
            freq[dharabahik[i] - 'A']++;
        }

        int suspicious = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 1)
            {
                suspicious = 1;
                break;
            }
        }

        if (suspicious == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
