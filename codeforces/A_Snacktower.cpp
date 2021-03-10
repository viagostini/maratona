#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1), d(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]] = i;
    }

    sort(a.begin() + 1, a.end(), greater<int>());

    int j = 1;
    for (int i = 1; i <= n; i++) {
        while (j <= n && d[a[j]] <= i) {
            cout << a[j++] << " ";
        }
        cout << endl;
    }
}