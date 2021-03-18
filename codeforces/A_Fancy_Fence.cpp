#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int a;
        cin >> a;
        cout << (360 % (180 - a) ? "NO" : "YES") << endl;
    }
}