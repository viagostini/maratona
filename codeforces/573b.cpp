#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 1e5 + 2;

int main(){
    int n, h[MAX], ans[MAX];

    scanf("%d", &n);
    ans[0] = ans[n+1] = 0;
    int maxi = 1;
    for(int i = 1; i <= n; i++){
        scanf("%d", &h[i]);
        ans[i] = min(ans[i-1] + 1, h[i]);
    }
    for(int i = n; i > 0; i--)
        ans[i] = min(ans[i], min(ans[i+1] + 1, h[i]));
    for(int i = 1; i <= n; i++)
        maxi = max(maxi, ans[i]);
    printf("%d\n", maxi);
}