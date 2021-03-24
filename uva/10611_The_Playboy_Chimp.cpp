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
        int lo, hi, mid;
        cin >> lh;

        // find last h[i] < lh
        lo = 0, hi = n - 1;
        while (lo < hi) {
            mid = lo + (hi - lo + 1) / 2;

            if (h[mid] < lh) {
                lo = mid;
            } else {
                hi = mid - 1;
            }
        }

        if (h[lo] < lh)
            cout << h[lo] << " ";
        else
            cout << "X ";

        // find first h[i] > lh
        lo = 0, hi = n - 1;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;

            if (h[mid] > lh) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }

        if (h[lo] > lh)
            cout << h[lo] << endl;
        else
            cout << 'X' << endl;
    }
}