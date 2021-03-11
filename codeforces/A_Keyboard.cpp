#include <bits/stdc++.h>

using namespace std;

int main() {
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    cin >> dir;
    string text;
    cin >> text;

    for (char c : text) {
        auto found = keys.find(c);
        cout << (dir == 'R' ? keys[found - 1] : keys[found + 1]);
    }
}