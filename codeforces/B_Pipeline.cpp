#include <bits/stdc++.h>

using namespace std;

// Need to find a subset of {1, 2, ..., k-1} that is == n-1
// Do Binary Search where the function is sum of last m items <= n

long long sum(long long n) {
    return n * (n + 1) / 2;
}

long long sum(long long left, long long right) {
    return sum(right) - sum(left - 1);
}

long long solve(long long n, long long k) {
    long long left = 1, right = k, mid;

    while (left < right) {
        mid = left + (right - left) / 2;

        // get sum of last k - mid + 1 splitters
        long long cursum = sum(mid, k);

        if (cursum > n)
            // need less splitters -> mid must go to the right
            left = mid + 1;
        else
            right = mid;
    }

    if (sum(left, k) == n)
        return k - left + 1;
    else
        return k - left + 2;
}

int main() {
    long long n, k;
    cin >> n >> k;

    if (n == 1)
        cout << "0" << endl;
    else if (n <= k)
        cout << "1" << endl;
    else if (sum(k - 1) < n - 1)
        cout << "-1" << endl;
    else
        cout << solve(n - 1, k - 1) << endl;
}