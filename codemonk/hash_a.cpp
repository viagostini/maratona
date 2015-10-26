#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 1e5 + 2;

bool seen[MAX];

int main(){
    int t, n, x;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        memset(seen,0,sizeof(seen));
        int ans = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            if(seen[x%10]) ans++;
            seen[x%10] = true;
        }
        printf("%d\n", ans);
    }
}
