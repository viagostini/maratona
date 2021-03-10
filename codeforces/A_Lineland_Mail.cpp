#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cities(n);
    for (int i = 0; i < n; i++)
        cin >> cities[i];

    cout << cities[1] - cities[0] << " ";
    cout << cities[n - 1] - cities[0] << endl;

    for (int i = 1; i < n - 1; i++) {
        int maxd = max(cities[n - 1] - cities[i], cities[i] - cities[0]);
        int mind = min(cities[i + 1] - cities[i], cities[i] - cities[i - 1]);
        cout << mind << " " << maxd << endl;
    }

    cout << cities[n - 1] - cities[n - 2] << " ";
    cout << cities[n - 1] - cities[0] << endl;
}