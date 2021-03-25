#include <bits/stdc++.h>

using namespace std;

string colors = "ROYGBIV";

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 3; i++) {
        cout << colors[i % 4];
    }
    cout << colors[4] << colors[5] << colors[6] << endl;
}
