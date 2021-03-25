#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pii> a(m);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[i] = {y, x};
    }

    sort(a.begin(), a.end(), greater<pii>());

    int taken = 0;
    long long ans = 0;
    for (int i = 0; i < m; i++) {
        int can_take = min(n - taken, a[i].second);
        taken += can_take;
        ans += can_take * a[i].first;
    }

    cout << ans << endl;
}