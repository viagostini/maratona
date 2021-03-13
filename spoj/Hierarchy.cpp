// Solution: find a topological sort and create a linear tree from it

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;

bool visited[MAXN];
vector<int> topo, parent(MAXN), adj[MAXN];

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
    topo.push_back(u);
}

int main() {
    int n, k;
    cin >> n >> k;

    for (int u = 1; u <= k; u++) {
        int a, v;
        cin >> a;
        for (int i = 0; i < a; i++) {
            cin >> v;
            adj[u].push_back(v);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    reverse(topo.begin(), topo.end());

    for (int i = 0; i < n; i++) {
        parent[topo[i]] = (i == 0) ? 0 : topo[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        cout << parent[i] << endl;
    }
}