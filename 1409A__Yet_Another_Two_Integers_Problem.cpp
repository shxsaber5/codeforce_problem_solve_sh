#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    
    while(n--)
    {
    int a,b; cin >> a >> b;
    
    int diff = abs(a-b);
    
    int step = diff/10;
    if(diff % 10 != 0){
        step++;
    }
    cout << step << endl;
    }
    
    return 0;
}
