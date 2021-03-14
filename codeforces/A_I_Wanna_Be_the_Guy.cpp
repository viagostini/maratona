#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, a;
    cin >> n;
    set<int> lev;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        lev.insert(a);
    }
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        lev.insert(a);
    }
    if (lev.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}