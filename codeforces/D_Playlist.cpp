// Solution: maintain set of songs and a queue of bad pairs to process.
// Erase songs as needed and push new bad pairs accordingly.

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

        set<int> songs;
        queue<int> bad;
        for (int i = 0; i < n; i++) {
            songs.insert(i);
            if (gcd(a[i], a[(i + 1) % n]) == 1)
                bad.push(i);
        }

        vi ans;
        while (!bad.empty()) {
            int i = bad.front();
            bad.pop();

            auto cur = songs.find(i);

            // if song is already removed, continue
            if (cur == songs.end())
                continue;

            // must erase next song from the set and add to answer
            // and add new bad pair if needed
            auto nxt = (next(cur) == songs.end()) ? songs.begin() : next(cur);
            auto new_nxt = (next(nxt) == songs.end()) ? songs.begin() : next(nxt);

            ans.push_back(*nxt + 1);
            songs.erase(nxt);

            if (gcd(a[*cur], a[*new_nxt]) == 1)
                bad.push(*cur);
        }

        cout << ans.size() << " ";
        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
}