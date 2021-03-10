#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_set<char> u(s.begin(), s.end());
    cout << (u.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}