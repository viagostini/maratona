#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto [mi, ma] = minmax_element(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (*mi < a[i] && *ma > a[i])
            ans++;
    }
    cout << ans << endl;
}