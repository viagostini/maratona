#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a = 0, d = 0;
    string s, ans;
    cin >> n >> s;
    for (char c : s) {
        if (c == 'A')
            a += 1;
        if (c == 'D')
            d += 1;
    }

    if (a > d)
        ans = "Anton";
    else if (a < d)
        ans = "Danik";
    else
        ans = "Friendship";

    cout << ans << endl;
}