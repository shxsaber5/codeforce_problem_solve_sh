// Problem Link:-https://codeforces.com/contest/703/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // number of rounds
    
    int mishkaWins = 0, chrisWins = 0;

    for (int i = 0; i < n; i++) {
        int m, c;
        cin >> m >> c; // scores of Mishka and Chris
        
        if (m > c) mishkaWins++; // Mishka wins the round
        else if (c > m) chrisWins++; // Chris wins the round
        // no action if it's a draw
    }

    // final result
    if (mishkaWins > chrisWins)
        cout << "Mishka" << endl;
    else if (chrisWins > mishkaWins)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl; // draw

    return 0;
}
