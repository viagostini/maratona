#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 1003;

vector<int> bits;

int main(){
    int t, n, k, x;

    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            bits.push_back(__builtin_popcount(x));
        }
        sort(bits.rbegin(),bits.rend());
        int ans = 0;
        for(int i = 0; i < k; i++)
            ans += bits[i];
        printf("%d\n", ans);
        bits.clear();
    }
}
