#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
vector<int> adj[105];
vector<int> color(105, -1);

void dfs(int u, int c) {
    color[u] = c;
    for (int v : adj[u]) {
        if (color[v] == -1) {
            dfs(v, (c + 1) % 2);
        } else if (color[v] == color[u]) {
            cnt++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            dfs(i, 0);
        }
    }

    cnt /= 2;
    if ((n - cnt) % 2 == 0) {
        cout << cnt;
    } else {
        cout << cnt + 1;
    }
}
