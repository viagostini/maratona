#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 1e6 + 2;

int seen[MAX];

int main(){
    int t, n, a, b;

    scanf("%d", &t);
    while(t--){
        memset(seen,0,sizeof(seen));
        scanf("%d", &n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            scanf("%d%d", &a, &b);
            if(a == b) continue;
            seen[a]++;
            if(seen[b]) seen[b]--;
            else ans++;
        }
        printf("%d\n", ans);
    }
}