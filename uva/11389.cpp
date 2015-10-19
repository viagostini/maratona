#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int n, d, r, a[105], m[105];

	while(scanf("%d %d %d", &n, &d, &r) && n){
		for(int i = 0; i < n; i++)
			scanf("%d", m+i);
		for(int i = 0; i < n; i++)
			scanf("%d", a+i);

		int ans = 0;
		sort(m, m+n);
		sort(a, a+n, cmp);
		for(int i = 0; i < n; i++)
			if(a[i] + m[i] > d) ans += (a[i]+m[i]-d) * r;
		printf("%d\n", ans);
	}
}
