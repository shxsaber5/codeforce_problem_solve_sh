// Problem Link :- https://codeforces.com/contest/1997/problem/A

#include <bits/stdc++.h>
using namespace std;

int calculateTime(string s) {
    int time = 2;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1])
            time += 1;
        else
            time += 2;
    }
    return time;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string all = "abcdefghijklmnopqrstuvwxyz";
        char insert_char = 'a';

        for (int i = 0; i < all.size(); i++) {
            if (find(s.begin(), s.end(), all[i]) == s.end()) {
                insert_char = all[i];
                break;
            }
        }

        int max_time = -1;
        string final_ans;

        for (int i = 0; i <= s.size(); i++) {
            string temp = s;
            temp.insert(temp.begin() + i, insert_char);
            int cur_time = calculateTime(temp);
            if (cur_time > max_time) {
                max_time = cur_time;
                final_ans = temp;
            }
        }

        cout << final_ans << endl;
    }

    return 0;
}
