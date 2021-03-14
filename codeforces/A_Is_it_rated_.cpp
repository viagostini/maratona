#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> ratings;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ratings.push_back({a, b});
    }

    for (int i = 0; i < n; i++) {
        if (ratings[i].first != ratings[i].second) {
            cout << "rated" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (ratings[i].first > ratings[j].first) {
                cout << "unrated" << endl;
                return 0;
            }
        }
    }
    cout << "maybe" << endl;
}