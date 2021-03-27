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
        int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cost = 0;
        for (int i = 0; i < n - 1; i++) {
            auto x = find(a.begin(), a.end(), i + 1) - a.begin();
            reverse(a.begin() + i, a.begin() + x + 1);
            int d = x - i + 1;
            cost += d;
        }

        cout << "Case #" << tc << ": " << cost << endl;
    }
}