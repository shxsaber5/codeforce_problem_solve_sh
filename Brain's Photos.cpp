// Problem Link:-https://codeforces.com/contest/707/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols; // Read number of rows and columns of the photo

    char pixel;          // Variable to store each pixel color
    int isColor = 0;     // Flag to check if any color pixel is found

    // Loop through each pixel in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> pixel; // Read the pixel color (e.g., 'C', 'M', 'Y', 'W', 'G', 'B')

            // If the pixel is a color pixel, mark it
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                isColor = 1;
            }
        }
    }

    // Output the result based on whether a color pixel was found
    cout << "#" << (isColor ? "Color" : "Black&White");

    return 0;
}

