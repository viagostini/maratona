#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

const int MAXN = 1e5 + 5;
const ll INF_MIN = numeric_limits<ll>::min();

ll score[MAXN][3], dp[MAXN][3];
vector<pii> valid_tasks = {{0, 1}, {0, 2}, {1, 0}, {1, 2}, {2, 0}, {2, 1}};

int main() {
    int n;
    cin >> n;

    for (int day = 1; day <= n; day++) {
        cin >> score[day][0] >> score[day][1] >> score[day][2];
        for (auto [last, task] : valid_tasks)
            dp[day][task] = max(dp[day][task], dp[day - 1][last] + score[day][task]);
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}