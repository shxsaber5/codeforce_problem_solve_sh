// Problem Link: https://codeforces.com/contest/41/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Input two string
    string s1,s2;
    cin >> s1 >> s2;
    
    reverse(s2.begin(), s2.end()); // Using Build In Function For Reverse.

    //Checking If String 1 Equal To String 2
    if(s1 == s2)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

  
    return 0;
    
}
