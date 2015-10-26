#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 1003;

int main(){
    num p, m;
    int t;

    scanf("%d", &t);
    while(t--){
        num ans = 0;
        scanf("%lld%lld", &p, &m);
        p = p^m;
        while(p){
            ans += p & 1;
            p >>= 1;
        }
        printf("%lld\n", ans);
    }
}
