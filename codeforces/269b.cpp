#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 5005;

int main(){
    int n, m, in[MAX], dp[MAX];
    double x;

    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d%lf", &in[i], &x);
    dp[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        dp[i] = 1;
        for(int j = i + 1; j < n; j++)
            if(in[i] <= in[j])
                dp[i] = max(dp[i], dp[j]+1);
    }
    int ans = INT_MIN;
    for(int i = 0; i < n; i++)
        ans = max(ans, dp[i]);
    printf("%d\n", n-ans);
}