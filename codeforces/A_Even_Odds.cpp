#include <bits/stdc++.h>

using namespace std;

long long a;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
        a = 1;
    } else {
        a = 2;
        k -= (n + 1) / 2;
    }
    cout << a + (k - 1) * 2;
}