#include <bits/stdc++.h>

using namespace std;

vector<int> pos(1e5 + 5);

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int q;
    cin >> q;

    long long left = 0, right = 0;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        left += pos[x] + 1;
        right += n - pos[x];
    }

    cout << left << " " << right << endl;
}