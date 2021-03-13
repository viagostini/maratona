#include <bits/stdc++.h>

using namespace std;

long long n, m, a, d;

long long lcm(long long a, long long b) {
    return (a * b) / __gcd(a, b);
}

long long num_div(long long x) {
    return (m / x) - (n - 1 / x);
}

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> n >> m >> a >> d;

        long long lcm_ = lcm(lcm(lcm(lcm(a, a + d), a + 2 * d), a + 3 * d), a + 4 * d);

        // ans == num_div(a) + num_div(a+d) + num_div(a+2d)... - num_div(lcm_)
    }
}