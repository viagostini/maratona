#include <bits/stdc++.h>

using namespace std;

int n, m;

bool visited[105];
vector<int> topo, adj[105];

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v])
            dfs(v);
    }
    topo.push_back(u);
}

int main() {
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;

        topo.clear();
        memset(visited, 0, sizeof visited);
        for (auto vec : adj)
            vec.clear();

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            adj[u].push_back(v);
        }

        for (int i = 0; i < n; i++)
            if (!visited[i])
                dfs(i);

        reverse(topo.begin(), topo.end());

        for (int u : topo) {
            cout << u + 1 << " ";
        }
        cout << endl;
    }
}