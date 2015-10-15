#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;

int main(){
	int m, p[MAX], n[MAX];

	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		scanf("%d", n+i);
		scanf("%d", p+i);
	}
	
	int mini = INT_MAX;
	int ans = 0;
	for(int i = 0; i < m; i++){
		mini = min(mini, p[i]);
		ans += n[i] * mini;
	}

	printf("%d\n", ans); 
	
}
