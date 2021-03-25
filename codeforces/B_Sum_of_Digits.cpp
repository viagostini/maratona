#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;

int solve(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    string in;
    cin >> in;

    if (in.size() == 1) {
        cout << 0 << endl;
        return 0;
    }

    // first operation must be done in string, others fit into ints
    int sum = 0;
    for (int i = 0; i < in.size(); i++) {
        sum += in[i] - '0';
    }

    int ans = 1;
    while (sum >= 10) {
        sum = solve(sum);
        ans++;
    }

    cout << ans << endl;
}