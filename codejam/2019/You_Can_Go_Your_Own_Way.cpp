#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n;
        string path, ans;

        cin >> n >> path;

        for (char c : path) {
            if (c == 'E')
                ans.push_back('S');
            else if (c == 'S')
                ans.push_back('E');
        }

        cout << "Case #" << tc << ": " << ans << endl;
    }
}