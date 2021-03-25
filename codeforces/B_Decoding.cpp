#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<char> ans(n);

    int m = (n / 2) - (n % 2 ? 0 : 1);
    ans[m] = s[0];

    int j = 1;
    for (int i = 1; j < n && i < n; i++) {
        if (n % 2) {
            ans[m - i] = s[j++];
            ans[m + i] = s[j++];
        } else {
            ans[m + i] = s[j++];
            ans[m - i] = s[j++];
        }
    }
    for (auto c : ans) {
        cout << c;
    }
    cout << endl;
}