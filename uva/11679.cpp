#include <bits/stdc++.h>
using namespace std;

int main(){
	int b, n, bank[25], deb[25];
	int d, c, v;

	while(scanf("%d %d", &b, &n) && n){
		for(int i = 1; i <= b; i++)
			scanf("%d", &bank[i]);
		for(int i = 0; i < n; i++){
			scanf("%d %d %d", &d, &c, &v);
			bank[d] -= v;
			bank[c] += v;
		}
		int i;
		for(i = 1; i <= b; i++){
			if(bank[i] < 0)	break;
		}
		 if(i <= b) puts("N");
		 else puts("S");
	}
}
