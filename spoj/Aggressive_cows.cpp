#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool possible(ll d, int c, vector<ll>& s) {
    // greedy: put cows as soon as possible
    int cows = 1;
    ll last = s[0];

    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= last + d) {
            cows++;
            last = s[i];
            if (cows == c) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n, c;
        cin >> n >> c;

        vector<ll> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        sort(s.begin(), s.end());

        // solution: binary search the distance
        ll lo = 0, hi = 1e9 + 9;
        while (lo < hi) {
            ll mid = lo + (hi - lo + 1) / 2;
            if (possible(mid, c, s)) {
                lo = mid;
            } else {
                hi = mid - 1;
            }
        }
        cout << lo << endl;
    }
}