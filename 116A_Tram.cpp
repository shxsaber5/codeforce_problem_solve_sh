#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of tram stops

    int maxPassengers = 0; // To store the maximum number of passengers at any time
    int currentPassengers = 0; // To keep track of current passengers on the tram

    while (n--) {
        int a, b;
        cin >> a >> b; // Read number of passengers exiting (a) and entering (b)

        // Update the number of current passengers
        currentPassengers = currentPassengers - a + b;

        // Update maximum if the current number exceeds the previous maximum
        if (currentPassengers > maxPassengers) {
            maxPassengers = currentPassengers;
        }
    }

    cout << maxPassengers << endl; // Output the maximum number of passengers

    return 0;
}
