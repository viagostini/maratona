#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    while (cin >> a >> b) {
        vector<int> prod(600);

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for (int i = 0; a[i]; i++) {
            for (int j = 0; b[j]; j++) {
                prod[i + j] += (a[i] - '0') * (b[j] - '0');
            }
        }

        for (int i = 0; i < prod.size(); i++) {
            prod[i + 1] += (prod[i] / 10);
            prod[i] = prod[i] % 10;
        }

        int i = prod.size() - 1;
        for (; i >= 0; i--) {
            if (prod[i] != 0 || i == 0) {
                break;
            }
        }

        reverse(prod.begin(), prod.begin() + i + 1);

        for (int j = 0; j <= i; j++) {
            cout << prod[j];
        }
        cout << endl;
    }
}