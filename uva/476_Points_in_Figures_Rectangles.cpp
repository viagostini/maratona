#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-9;

double ltx[100], lty[100], rbx[100], rby[100];

int main() {
    char c;
    int p = 0, r = 0;
    double x1, y1, x2, y2;

    while (cin >> c && c == 'r') {
        cin >> ltx[r] >> lty[r] >> rbx[r] >> rby[r++];
    }

    while (cin >> x1 >> y1) {
        if (fabs(x1 - 9999.9) < EPS && fabs(y1 - 9999.9) < EPS) {
            break;
        }

        bool any = false;
        for (int i = 0; i < r; i++) {
            if (x1 > ltx[i] && x1 < rbx[i] && y1 < lty[i] && y1 > rby[i]) {
                any = true;
                printf("Point %d is contained in figure %d\n", p + 1, i + 1);
            }
        }
        if (!any) {
            printf("Point %d is not contained in any figure\n", p + 1);
        }
        p++;
    }
}