#include <bits/stdc++.h>

using namespace std;

int n, m;

char grid[10][10];
bool visited[10][10];

int dx[3] = {0, 0, -1};
int dy[3] = {1, -1, 0};

string s = "IEHOVA#";

int si, sj;

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int i, int j) {
    visited[i][j] = true;
    for (int k = 0; k < 3; k++) {
        int nx = i + dx[k];
        int ny = j + dy[k];
        if (valid(nx, ny) && !visited[nx][ny] && s.find(grid[nx][ny]) != s.npos) {
            if (dx[k] == -1)
                cout << "forth";
            else if (dy[k] == 1)
                cout << "right";
            else
                cout << "left";

            if (grid[nx][ny] != '#')
                cout << " ";

            dfs(nx, ny);
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> n >> m;

        memset(visited, 0, sizeof visited);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                if (grid[i][j] == '@') {
                    si = i;
                    sj = j;
                }
            }
        }
        dfs(si, sj);
        cout << endl;
    }
}