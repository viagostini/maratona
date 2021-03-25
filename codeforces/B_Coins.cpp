#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj(3);
vector<int> deg(3), vis(3), topo;

void dfs(int u) {
    vis[u] = 1;
    for (auto v : adj[u]) {
        if (!vis[v])
            dfs(v);
        else if (vis[v] == 1) {
            cout << "Impossible" << endl;
            exit(0);
        }
    }
    vis[u] = 2;
    topo.push_back(u);
}

int main() {
    int maxd = 0, maxi = -1;
    for (int i = 0; i < 3; i++) {
        char a, b, c;
        cin >> a >> b >> c;

        int ai = a - 'A', ci = c - 'A';

        if (b == '>') {
            adj[ai].push_back(ci);
            deg[ai]++;
            if (deg[ai] > maxd) {
                maxd = deg[ai];
                maxi = ai;
            }
        } else {
            adj[ci].push_back(ai);
            deg[ci]++;
            if (deg[ci] > maxd) {
                maxd = deg[ci];
                maxi = ci;
            }
        }
    }

    dfs(maxi);
    for (int x : topo) {
        cout << (char)(x + 'A');
    }
    cout << endl;
}