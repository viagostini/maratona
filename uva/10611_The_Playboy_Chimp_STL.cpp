#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, lh;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    cin >> q;
    while (q--) {
        cin >> lh;

        auto lo = lower_bound(h.begin(), h.end(), lh);
        auto hi = upper_bound(h.begin(), h.end(), lh);

        if (lo == h.begin())
            cout << "X ";
        else
            cout << *(lo - 1) << " ";

        if (hi == h.end())
            cout << "X" << endl;
        else
            cout << *hi << endl;
    }
}