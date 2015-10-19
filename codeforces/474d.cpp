#include <bits/stdc++.h>
using namespace std;
typedef long long num;
typedef pair<int,int> pii;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

num ans[MAX];

int main(){
    int t, k, a, b;

    while(scanf("%d %d", &t, &k) != EOF){
        vector<pii> q;
        int maxi = -1;
        while(t--){
            scanf("%d %d", &a, &b);
            q.push_back(pii(a,b));
            if(b > maxi)
                maxi = b;
        }
        for(int i = 0; i < k; i++)
            ans[i] = 1;
        for(int i = k; i <= maxi; i++)
            ans[i] = (ans[i-1] + ans[i-k]) % MOD;

        for(int i = 1; i <= maxi; i++)
            ans[i] = (ans[i] + ans[i-1]) % MOD;

        t = q.size();
        for(int i = 0; i < t; i++){
            a = q[i].first;
            b = q[i].second;
            cout << (ans[b] - ans[a-1] + MOD) % MOD << "\n";
        }
    }
}
