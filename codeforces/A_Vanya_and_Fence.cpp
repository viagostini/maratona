// Div2 Round 355

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > h)
            ans += 2;
        else
            ans += 1;
    }
    cout << ans << endl;
}