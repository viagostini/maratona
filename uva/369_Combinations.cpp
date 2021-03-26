#include <bits/stdc++.h>

using namespace std;

const int maxn = 100;

int C[maxn + 1][maxn + 1];

int main() {
    int N, M;

    C[0][0] = 1;
    for (int n = 1; n <= maxn; ++n) {
        C[n][0] = C[n][n] = 1;
        for (int k = 1; k < n; ++k)
            C[n][k] = C[n - 1][k - 1] + C[n - 1][k];
    }

    while (true) {
        cin >> N >> M;
        if (N == 0 && M == 0)
            break;
        printf("%d things taken %d at a time is %d exactly.\n", N, M, C[N][M]);
    }
}