#include <bits/stdc++.h>

using namespace std;

std::string& ltrim(std::string& str) {
    str.erase(0, str.find_first_not_of('0'));
    return str;
}

int main() {
    int t;

    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        string N, left, right;
        cin >> N;

        for (char c : N) {
            int digit = c - '0';
            if (digit == 4) {
                left.push_back('2');
                right.push_back('2');
            } else {
                left.push_back('0');
                right.push_back(c);
            }
        }

        cout << "Case #" << tc << ": " << ltrim(left) << " " << ltrim(right) << endl;
    }
}