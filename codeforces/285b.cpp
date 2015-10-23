#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 3;

int main(){
	int n, s, t, p[MAX], f[MAX];

	scanf("%d%d%d", &n, &s, &t);
	for(int i = 1; i <= n; i++){
		scanf("%d", p+i);
		f[i] = 0;
	}
	int cont = 0;
	while(f[s] == 0 && s != t){
		cont++;
		f[s]++;
		s = p[s];
	}
	if(s == t) printf("%d\n", cont);
	else printf("-1\n");
}
