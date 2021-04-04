#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n;
        cin >> n;
        string A, B;
        cin >> A >> B;
        vi a(n), b(n), can(n);

        int zeros = 0, ones = 0;
        for (int i = 0; i < n; i++) {
            a[i] = A[i] - '0';
            b[i] = B[i] - '0';
            if (a[i] == 0) zeros++;
            if (a[i] == 1) ones++;
            if (zeros == ones) can[i] = 1;
        }

        int flips = 0;
        bool possible = true;
        for (int i = n - 1; i >= 0; i--) {
            a[i] = (flips % 2) ? (a[i] + 1) % 2 : a[i];
            if (a[i] != b[i]) {
                // need to flip [0...i]
                if (can[i]) {
                    flips++;
                } else {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}