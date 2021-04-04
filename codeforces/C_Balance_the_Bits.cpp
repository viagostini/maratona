// Observations:
//  - number of 1's and 0's must be even
//  - first and last can't be 0
//
// Solution:
//  - 1's: first half is '(', other half is ')'
//  - 0's: alternate between a and b

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

#define all(x) begin(x), end(x)

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n;
        string s;
        cin >> n >> s;

        int n0 = count(all(s), '0'), n1 = count(all(s), '1');

        if (s[0] == '0' || s.back() == '0' || n0 % 2) {
            cout << "NO\n";
            continue;
        }

        string a, b;
        int k0 = 0, k1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (k1 < n1 / 2) {
                    a.push_back('(');
                    b.push_back('(');
                } else {
                    a.push_back(')');
                    b.push_back(')');
                }
                k1++;
            } else {
                if (k0 % 2) {
                    a.push_back('(');
                    b.push_back(')');
                } else {
                    a.push_back(')');
                    b.push_back('(');
                }
                k0++;
            }
        }
        cout << "YES\n" << a << endl << b << endl;
    }
}