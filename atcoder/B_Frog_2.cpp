#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

const int MAXN = 1e5 + 5;
const ll INF = numeric_limits<ll>::max();

int main() {
    int n, k;
    cin >> n >> k;

    vi h(MAXN);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    vector<ll> dp(MAXN, INF);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
            }
        }
    }
    cout << dp[n - 1] << endl;
}