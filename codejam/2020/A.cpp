#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, T, M, N;

    cin >> T;

    t = 1;
    while (t <= T) {
        int k = 0, r = 0, c = 0;
        cin >> N;

        vector<set<int>> col_sets(200);
        vector<bool> col_found(200, false);

        for (int i = 0; i < N; i++) {
            set<int> row_set;
            bool row_found = false;

            for (int j = 0; j < N; j++) {
                cin >> M;

                if (i == j)
                    k += M;

                if (!row_found && row_set.count(M)) {
                    r++;
                    row_found = true;
                }
                row_set.insert(M);

                if (!col_found[j] && col_sets[j].count(M)) {
                    c++;
                    col_found[j] = true;
                }
                col_sets[j].insert(M);
            }
        }
        cout << "Case #" << t++ << ": " << k << " " << r << " " << c << endl;
    }
}