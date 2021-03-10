#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N;
        int c_end = 0;
        int j_end = 0;
        string ans;
        vector<pair<int, int>> times;
        bool possible = true;

        cin >> N;
        for (int i = 0; i < N; i++) {
            int s, e;
            cin >> s >> e;
            times.push_back(make_pair(s, e));
        }

        sort(times.begin(), times.end());

        for (int i = 0; i < N; i++) {
            if (c_end <= times[i].first) {
                c_end = times[i].second;
                ans.push_back('C');
            } else if (j_end <= times[i].first) {
                j_end = times[i].second;
                ans.push_back('J');
            } else {
                possible = false;
            }
        }
        if (!possible) {
            ans = "IMPOSSIBLE";
        }

        cout << "Case #" << t << ": " << ans << endl;
    }
}