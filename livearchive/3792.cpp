#include <bits/stdc++.h>
using namespace std;
typedef long long num;

char w[12], x[12];
int n;

num solve(int pos, int b){
	if(pos == n && b == 0) return 0;
	if(pos == n && b == 1) return 1;

	num ans = 0;
	if(w[pos] == '?'){
		if(b == 1)
			ans += 10*solve(pos+1,1);
		else ans += (9-(pos[x]-'0'))*solve(pos+1,1) + solve(pos+1,0);
	}
	else{
		if(b == 0 && x[pos] > w[pos]) return 0;
		if(b == 0 && x[pos] == w[pos]) ans += solve(pos+1,0);
		if(b == 0 && x[pos] < w[pos]) ans += solve(pos+1,1);
		if(b == 1) ans += solve(pos+1,1);
	}
	return ans;
}

int main(){

	while(scanf(" %s", w) && w[0] != '#'){
		scanf(" %s", x);
		n = strlen(w);
		num ans = solve(0,0);
		printf("%lld\n", ans);
	}
}
