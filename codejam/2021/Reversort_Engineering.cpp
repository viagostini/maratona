#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n, c;
        cin >> n >> c;

        if (c < n - 1 || c > ((n - 1) * n / 2 + n - 1)) {
            cout << "Case #" << tc << ": IMPOSSIBLE" << endl;
            continue;
        }

        vi a(n);
        iota(a.begin(), a.end(), 1);

        int need = c - (n - 1);
        c = (n - 1);
        for (int turn = 1, i = 0, j = n - 1; i < j && need > 0; turn++) {
            if (need >= (n - turn)) {
                need -= (n - turn);
                c += (n - turn);
                reverse(a.begin() + i, a.begin() + j + 1);
                if (turn % 2) {
                    j--;
                } else {
                    i++;
                }
            } else {
                reverse(a.begin() + i, a.begin() + i + need + 1);
                c += need;
                need = 0;
            }
        }
        cout << "Case #" << tc << ": ";
        for (auto x : a) {
            cout << x << " ";
        }
        cout << endl;
    }
}