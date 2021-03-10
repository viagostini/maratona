#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a;
            if (a == 1) {
                y = i + 1;
                x = j + 1;
            }
        }
    }
    cout << abs(3 - x) + abs(3 - y) << endl;
}