#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    a--;

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int ans = (c[a]) ? 1 : 0;

    for (int d = 1; d < n; d++) {
        if (a - d >= 0 && a + d < n && c[a - d] && c[a + d])
            ans += 2;
        else if (a - d >= 0 && a + d >= n && c[a - d])
            ans += 1;
        else if (a - d < 0 && a + d < n && c[a + d])
            ans += 1;
    }
    cout << ans << endl;
}