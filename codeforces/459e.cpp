#include <bits/stdc++.h>
using namespace std;

const int MAX = 3 * 1e5 + 5;

struct edge {
    int from, to, cost;
    bool operator < (const edge& a) const {
        return cost < a.cost;
    }
    edge(int a, int b, int c) : from(a), to(b), cost(c) {}
};

int dp[MAX], pre[MAX];
vector<edge> edges;

int main(){
    int n, m, a, b, c;

    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        scanf("%d %d %d", &a, &b, &c);
        edges.push_back(edge(a,b,c));
    }
    sort(edges.begin(), edges.end());

    for(int i = 0; i <= n; i++){
        dp[i] = 0;
        pre[i] = 0;
    }
    int maxi = 0;
    int i = 0;
    while(i < m){
        vector<int> q;
        q.push_back(i);
        i++;
        while(i < m && edges[i].cost == edges[i-1].cost){
            q.push_back(i);
            i++;
        }
        for(int j = 0; j < q.size(); j++){
            int u = edges[q[j]].from;
            int v = edges[q[j]].to;

            pre[v] = max(pre[v], dp[u] + 1);
        }
        for(int j = 0; j < q.size(); j++){
            int v = edges[q[j]].to;
            
            dp[v] = max(dp[v], pre[v]);
            maxi = max(maxi, dp[v]);
        }
    }
    
    printf("%d\n", maxi);
}