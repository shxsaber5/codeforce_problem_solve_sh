// Problem Link: https://codeforces.com/contest/1742/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	while(n--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    
	    if(a+b == c || a+c == b || b+c == a ) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
    
    return 0;
}
