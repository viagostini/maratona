#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i < (int)1e4; i++) {
        int total = k * i;
        if (total % 10 == 0 || (total - r) % 10 == 0) {
            cout << i << endl;
            break;
        }
    }
}