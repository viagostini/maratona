#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3 + 5;

int main(){
	int n, g[MAX];

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &g[i]);

	int delta = g[0];
	int ant = INT_MIN;
	bool ok = true;

	for(int i = 0; i < n; i++) {
		if(i%2) g[i] += delta;
		else g[i] -= delta;
		if(g[i] < 0) g[i] += n;
		g[i] %= n;
		if(g[i] <= ant) ok = false;
		ant = g[i];
	}
	if(ok) puts ("Yes");
	else puts ("No");

}
