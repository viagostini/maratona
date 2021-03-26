#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n, m;
        cin >> n >> m;

        int limit = (m % 2) ? (m + 1) / 2 : m / 2;

        vector<int> ans(m);
        vector<int> freq(n + 1, 0);
        vector<pair<int, set<int>>> d(m);

        for (int i = 0; i < m; i++) {
            int k, f;
            cin >> k;
            d[i] = {i, {}};
            for (int j = 0; j < k; j++) {
                cin >> f;
                d[i].second.insert(f);
            }
        }

        sort(d.begin(), d.end(), [&](pair<int, set<int>> a, pair<int, set<int>> b) {
            return a.second.size() < b.second.size();
        });

        // greedily pick friends from each day
        bool possible = true;
        for (auto p : d) {
            for (auto fi : p.second) {
                if (freq[fi] < limit) {
                    freq[fi]++;
                    ans[p.first] = fi;
                    break;
                }
            }
            if (!ans[p.first]) {
                possible = false;
                cout << "NO" << endl;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
            for (int i = 0; i < m; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}