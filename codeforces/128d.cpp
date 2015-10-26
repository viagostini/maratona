#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MOD = 1e9+7;
const int MAX = 1e5+2;
const int p = 263;

char a[MAX], b[MAX];
num ha[MAX], hb[MAX], pot[MAX], prefix;

bool is_divisor(int i, num *hsh, int sz){
    if(sz%i != 0) return false;
    int st, j;
    for(st = 1; st <= sz - i + 1; st += i){
        j = st + i - 1;
        num cmp = (hsh[j] - (hsh[st-1] * pot[i]) % MOD + MOD) % MOD;
        if(cmp != prefix) return false;
    }
    return true;
}

int main(){
    int sa, sb;
    scanf("%s%s", a+1, b+1);

    sa = strlen(a+1), sb = strlen(b+1);

    pot[0] = 1;
    for(int i = 1; i <= sa; i++){
        ha[i] = (ha[i-1] * p + a[i]) % MOD;
        pot[i] = (pot[i-1] * p) % MOD;
    }

    for(int i = 1; i <= sb; i++)
        hb[i] = (hb[i-1] * p + b[i]) % MOD;

    int cont = 0;
    for(int i = 1; i <= sa; i++){
        prefix = ha[i];
        if(is_divisor(i,ha,sa) && is_divisor(i,hb,sb)) cont++;
    }
    printf("%d\n", cont);
}