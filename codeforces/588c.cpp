#include <bits/stdc++.h>
using namespace std;

const int MAX = 2000006;

int f[MAX];

int main(){
	int n, num;

	scanf("%d", &n);
	memset(f,0,sizeof f);
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		f[num]++;
	}

	for(int i = 0; i < MAX-1; i++){
		if(f[i] > 1){
			f[i+1] += f[i]/2;
			f[i] %= 2;
		}
	}
	int ans = 0;
	for(int i = 0; i < MAX; i++)
		ans += f[i];
	printf("%d\n", ans);
}
