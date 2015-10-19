#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005;

int main(){
    int n;
    long long x[MAX], y[MAX], len[MAX];

    while(scanf("%d", &n) && n != 0){
        for(int i = 0; i < n; i++)
            scanf("%d %d", x+i, y+i);
        int ans = 0, rep;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                len[j] = (x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]);
            sort(len, len+n);
            int j = 0, k;
            while(j < n){
                k = j;
                while(k < n && len[k] == len[j]) k++;
                rep = k - j;
                ans += (rep*(rep-1)/2);
                j = k;
            }
        }
        printf("%d\n", ans);
    }
}
