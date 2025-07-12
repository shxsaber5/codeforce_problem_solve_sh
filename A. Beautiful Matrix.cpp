// Problem Link:-https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main()
{
    int x;
    
    // Iterate over the 5x5 matrix rows
    for (int i = 1; i <= 5; i++)
    {
        // Iterate over the 5x5 matrix columns
        for (int j = 1; j <= 5; j++)
        {
            cin >> x; // Read the current cell value
            
            // Check if the current cell contains the number 1
            if (x == 1)
            {
                /*
                 * The goal is to move the number 1 to the center of the matrix (3,3).
                 * Calculate and print the Manhattan Distance from (i,j) to (3,3).
                 * This is the minimum number of moves required (row swaps + column swaps).
                 */
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    
    return 0;
}
