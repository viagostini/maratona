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
        int X, Y;
        string S, ans;
        cin >> X >> Y >> S;
        ans = S;

        // solve each segment of ?
        for (int i = 0; i < S.size(); i++) {
            int j = i;
            if (S[i] == '?') {
                while (S[j] == '?' && j < S.size())
                    j++;

                // range [i, j) is segment of ?
                int size = j - i;
                if (size == S.size()) {
                    ans = string(S.size(), 'C');
                } else if (j == S.size()) {
                    fill(ans.begin() + i, ans.end(), S[i - 1]);
                } else {
                    fill(ans.begin() + i, ans.begin() + j, S[j]);
                }
                i = j;
            }
        }

        int cost = 0;
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i - 1] == 'C' && ans[i] == 'J')
                cost += X;
            else if (ans[i - 1] == 'J' && ans[i] == 'C')
                cost += Y;
        }

        cout << "Case #" << tc << ": " << cost << endl;
    }
}