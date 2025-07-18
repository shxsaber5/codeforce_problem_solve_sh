// Problem Link:-https://codeforces.com/contest/61/problem/A

#include <bits/stdc++.h> 
using namespace std;

int main() {
    string a, b;       // Declare two strings to store binary numbers
    cin >> a >> b;     // Take input for both strings

    string result = ""; // Initialize an empty string to store the final answer

    // Loop through each character of the strings
    for (int i = 0; i < a.size(); i++) {
        // If the characters at the same position are different
        if (a[i] != b[i])
            result += '1';  // Add '1' to result (XOR rule)
        else
            result += '0';  // Add '0' if characters are same
    }

    cout << result << endl; // Print the final result string

    return 0; 
}
