#include <bits/stdc++.h>
using namespace std;
typedef long long num;
typedef pair<num,num> pn;

const int MAX = 1e7 + 1;
const int MOD = 1e9 + 7;

int main(){
    int n;
    num dp[MAX];

    scanf("%d", &n);
    dp[1] = 0, dp[2] = 3;
    for(int i = 3; i <= n; i++)
        dp[i] = (2*dp[i-1] + 3*dp[i-2])%MOD;
    cout << dp[n] << "\n";
}