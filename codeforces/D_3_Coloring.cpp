#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

queue<pii> black, white;

void fill(queue<pii> &q, int token) {
    pii next = q.front();
    q.pop();
    cout << token << " " << next.first << " " << next.second << "\n";
    cout.flush();
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i % 2) == (j % 2)) {
                black.push({i, j});
            } else {
                white.push({i, j});
            }
        }
    }

    for (int turn = 0; turn < n * n; turn++) {
        int a;
        cin >> a;

        if (a == 1) {
            // try to put 2 in black square, else 3 in white
            if (!black.empty()) {
                fill(black, 2);
            } else {
                fill(white, 3);
            }
        } else if (a == 2) {
            // try to put 1 in white square, else 3 in black
            if (!white.empty()) {
                fill(white, 1);
            } else {
                fill(black, 3);
            }
        } else {
            if (!white.empty()) {
                fill(white, 1);
            } else {
                fill(black, 2);
            }
        }
    }
}