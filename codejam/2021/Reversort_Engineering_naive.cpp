#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= 1; tc++) {
        int n, c;
        cin >> n >> c;

        vi a(n);
        iota(a.begin(), a.end(), 1);

        bool possible = false;
        do {
            int cost = 0;
            vi b(a);
            for (int i = 0; i < n - 1; i++) {
                auto x = find(b.begin(), b.end(), i + 1) - b.begin();
                reverse(b.begin() + i, b.begin() + x + 1);
                int d = x - i + 1;
                cost += d;
            }
            if (cost == c) {
                possible = true;
                break;
            }
        } while (next_permutation(a.begin(), a.end()));
        if (possible) {
            cout << "Case #" << tc << ": ";
            for (int x : a) {
                cout << x << " ";
            }
            cout << endl;
        } else {
            cout << "Case #" << tc << ": IMPOSSIBLE" << endl;
        }
    }
}