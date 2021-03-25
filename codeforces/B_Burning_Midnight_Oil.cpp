#include <bits/stdc++.h>

using namespace std;

long long total_lines(long long lines, int k) {
    long long total = 0;
    while (lines) {
        total += lines;
        lines /= k;
    }
    return total;
}

int main() {
    int n, k;
    cin >> n >> k;

    // solution: binary search on v
    long long lo = 0, hi = 1e9 + 9;
    while (lo < hi) {
        long long mid = lo + (hi - lo) / 2;

        if (total_lines(mid, k) >= n) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << lo << endl;
}