#include <bits/stdc++.h>
using namespace std;
typedef long long num;

num gcd(num a, num b){
    return (b == 0) ? a : gcd(b, a%b);
}

int main(){
    int n;

    scanf("%d", &n);
    if(n == 1){
        puts("1");
        return 0;
    }
    if(n == 2){
        puts("2");
        return 0;
    }

    num ans;
    if(n&1) ans = 1ll * n * (n-1) * (n-2);
    else {
        ans = 1ll * n * (n-1) * (n-3);
        ans /= gcd(n,n-3);
        num x = 1ll * (n-1)*(n-2)*(n-3);
        if(x > ans) ans = x;
    }
    cout << ans << "\n";
}