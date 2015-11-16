#include <bits/stdc++.h>
using namespace std;

const int MAX = 2 * 1e3 + 2;

int s[MAX], p[MAX], sz[MAX], ans;

int find (int a) {
	if (p[a] != p[p[a]]) p[a] = find(p[a]);
	return p[a];
}

void join (int a, int b) {
	if (a == b) return;
	if(sz[a] < sz[b]) swap(a,b);
	sz[a] += sz[b];
	p[b] = a;
}

int main(){
	int n, x, y;

	scanf("%d", &n);
	for(int i = 0; i <= MAX; i++)
		p[i] = 0, sz[i] = 1;
	for(int i = 0; i < n; i++){
		scanf("%d%d", &x, &y);
		y += 1000;
		if(!p[x]) p[x] = x;
		if(!p[y]) p[y] = y;
		join(find(x), find(y));
	}
	ans = 0;
	for(int i = 1; i <= MAX; i++){
		int pai = find(i);
		if (pai && !s[pai])
			ans++,	s[pai] = 1;
	}

	printf("%d\n", ans-1);
}
