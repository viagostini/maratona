#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int c,n, aux;
int acc[N], freq[N];


int main() {
	while(scanf("%d %d",&c,&n) && c != 0) {
		acc[0] = 0;
		memset(freq,0,sizeof freq);
		int ans = -1;
		for(int i = 1; i <= n; i++) {
			scanf("%d",&aux);
			acc[i]  = (acc[i-1] + aux)%c;
			freq[acc[i]]++;
			if (acc[i] == 0) ans = i;
		}
		if (ans != -1) {
			for(int i = 1; i <= ans; i++)
				printf("%d%c",i,i == ans ? '\n' : ' '); 
		}
		else {
			for(int i = 1; i < N; i++){
				if(freq[i] > 1) {
					ans = i;
					break;
				}
			}
			int l, r, cont = 0;
			for(int i = 1; i <= n; i++){
				if(acc[i] == ans && !cont) l = i, cont++;
				else if(acc[i] == ans) { 
					r = i;
					break;
				}
			}
			for(int i = l+1; i <= r; i++)
				printf("%d%c",i,i == r ? '\n' : ' '); 
		}
	}
}
