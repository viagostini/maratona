#include <bits/stdc++.h>
using namespace std;
typedef long long num;
typedef pair<num,num> par;

const int MAX = 2*1e5+2;

char s[MAX], mapa[300], atual[300];

int main(){
    int n, m;
    char x, y;

    scanf("%d%d", &n, &m);
    scanf(" %s", s);

    for(int i = 'a'; i <= 'z'; i++){
        mapa[i] = i;
        atual[i] = i;
    }

    for(int i = 0; i < m; i++){
        scanf(" %c %c", &x, &y);
        swap(atual[x], atual[y]);
        mapa[atual[x]] = x;
        mapa[atual[y]] = y;
    }
    for(int i = 0; i < n; i++)
        printf("%c", mapa[s[i]]);
    printf("\n");
}