#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        ans += (a + b + c >= 2);
    }
    cout << ans << endl;
}