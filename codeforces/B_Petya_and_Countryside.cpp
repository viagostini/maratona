#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, maxa = 0;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    // brute force every starting point
    for (int i = 0; i < n; i++) {
        int ans = 1, last = h[i];

        for (int j = i - 1; j >= 0 && h[j] <= last; j--) {
            ans++;
            last = h[j];
        }

        last = h[i];
        for (int j = i + 1; j < n && h[j] <= last; j++) {
            ans++;
            last = h[j];
        }

        maxa = max(ans, maxa);
    }

    cout << maxa << endl;
}