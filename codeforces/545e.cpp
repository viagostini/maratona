#include <bits/stdc++.h>
#define pb push_back
#define peso first
#define vert second
using namespace std;
typedef long long num;
typedef pair<num,num> pn;

const int MAX = 3 * 1e5 + 6;

typedef struct edge{
    int src, dest;
    num cost;
    edge() {}
    edge(int a, int b, num c): src(a), dest(b), cost(c) {}
} edge;

vector<edge> edges(MAX);
vector<pn> adj[MAX];
num d[MAX], in[MAX];
int p[MAX];

void solve(int st){
    priority_queue<pn,vector<pn>,greater<pn> > pq;
    d[st] = in[st] = 0;
    pq.push(pn(0,st));

    while(pq.size()){
        int v = pq.top().vert;
        pq.pop();
        for(int i = 0; i < adj[v].size(); i++){
            int u = adj[v][i].vert;
            int w = adj[v][i].peso;
            if(d[u] > d[v] + w){
                p[u] = v;
                in[u] = w;
                d[u] = d[v] + w;
                pq.push(pn(d[u], u));
            }
            else if(d[u] == d[v] + w){
                if(in[u] > w){
                    in[u] = w;
                    p[u] = v;
                }
            }
        }
    }
}

int main(){
    int n, m, a, b, c;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++){
        scanf("%d %d %d", &a, &b, &c);
        adj[a].pb(pn(c,b));
        adj[b].pb(pn(c,a));
        edges[i] = edge(a,b,c);
    }
    for(int i = 0; i <= m; i++) p[i] = i;
    for(int i = 0; i <= n; i++){
        d[i] = in[i] = LLONG_MAX;
    }

    int st;
    scanf("%d", &st);
    solve(st);

    num ans = 0;
    for(int i = 1; i <= n; i++)
        ans += in[i];
    cout << ans << "\n";

    for(int i = 0; i < m; i++){
        int a = edges[i].src;
        int b = edges[i].dest;
        if(p[a] == b || p[b] == a)
            printf("%d ", i+1);
    }
    printf("\n");

}
