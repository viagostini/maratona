#include <bits/stdc++.h>
using namespace std;
typedef long long num;
typedef pair<int,int> pii;

const int MAX = 1e5 + 1;

int main(){
    int n, a[MAX];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", a+i);
    sort(a,a+n);
    int ans = 0, tt = 0;
    for(int i = 0; i < n; i++){
        if(tt > a[i]) continue;
        tt += a[i];
        ans++;
    }
    printf("%d\n", ans);
}
