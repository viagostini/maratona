#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    unordered_set<int> shoes;

    cin >> a >> b >> c >> d;
    shoes.insert({a, b, c, d});

    cout << 4 - shoes.size() << endl;
}