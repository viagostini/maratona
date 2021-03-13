#include <bits/stdc++.h>

using namespace std;

int n, tc = 1;

char grid[30][30];
bool visited[30][30];

int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[8] = {0, 0, 1, -1, -1, 1, 1, -1};

// In C++17, we can use structured binding to make it even better

// vector<pair<int, int>> mov = {{1, 0},  {-1, 0}, {0, 1}, {0, -1},
//                               {1, -1}, {-1, 1}, {1, 1}, {-1, -1}};
// for (auto [dx, dy] : mov)

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= n)
        return false;
    return true;
}

void dfs(int i, int j) {
    visited[i][j] = true;
    for (int k = 0; k < 8; k++) {
        int nx = i + dx[k];
        int ny = j + dy[k];
        if (valid(nx, ny) && grid[nx][ny] == '1' && !visited[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        memset(visited, 0, sizeof(visited));

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    ans++;
                    dfs(i, j);
                }
            }
        }
        cout << "Image number " << tc++ << " contains " << ans << " war eagles."
             << endl;
    }
}
