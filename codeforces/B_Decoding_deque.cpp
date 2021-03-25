#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    deque<char> ans;

    for (int i = 0; i < n; i++) {
        if (n % 2) {
            if (i % 2)
                ans.push_front(s[i]);
            else
                ans.push_back(s[i]);
        } else {
            if (i % 2)
                ans.push_back(s[i]);
            else
                ans.push_front(s[i]);
        }
    }

    for (auto c : ans) {
        cout << c;
    }
    cout << endl;
}