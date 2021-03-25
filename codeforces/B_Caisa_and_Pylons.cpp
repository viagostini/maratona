#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long ans = h[0], en = 0;
    for (int i = 1; i < n; i++) {
        if (h[i] - h[i - 1] > en) {
            ans += h[i] - h[i - 1] - en;
            en = 0;
        } else {
            en += (h[i - 1] - h[i]);
        }
    }
    cout << ans << endl;
}