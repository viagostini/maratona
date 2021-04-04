#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

bool is_palindrome(string s) {
    bool flag = true;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1]) flag = false;
    }
    return flag;
}

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        string s;
        cin >> s;

        if (!s.size() || s == string(s.size(), 'a')) {
            cout << "NO" << endl;
            continue;
        }

        string one = s + 'a';
        string two = 'a' + s;

        cout << "YES" << endl;
        if (!is_palindrome(one)) {
            cout << one << endl;
        } else {
            cout << two << endl;
        }
    }
}