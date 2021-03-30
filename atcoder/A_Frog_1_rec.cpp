#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

const int MAXN = 1e5 + 5;
const ll INF = numeric_limits<ll>::max();

int n;
vi h(MAXN);
vector<ll> dp(MAXN, -1);

ll solve(int n) {
    ll jump_one, jump_two;

    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    if (n - 1 >= 0) {
        dp[n - 1] = solve(n - 1);
        jump_one = dp[n - 1] + abs(h[n] - h[n - 1]);
    } else {
        jump_one = INF;
    }

    if (n - 2 >= 0) {
        dp[n - 2] = solve(n - 2);
        jump_two = dp[n - 2] + abs(h[n] - h[n - 2]);
    } else {
        jump_two = INF;
    }

    return min(jump_one, jump_two);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    cout << solve(n - 1);
}