#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double k;

    cin >> n >> k;

    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        p[i] = {a, b};
    }

    double ans = 0.0;
    for (int i = 1; i < n; i++) {
        ans += sqrt((p[i].first - p[i - 1].first) * (p[i].first - p[i - 1].first) +
                    (p[i].second - p[i - 1].second) * (p[i].second - p[i - 1].second));
    }

    ans = ans / 50 * k;
    cout << fixed << setprecision(6) << ans << endl;
}