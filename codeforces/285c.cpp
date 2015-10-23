#include <bits/stdc++.h>
using namespace std;

const int MAX = 3 * 1e5 + 3;

int main(){
	int n, a[MAX];
	long long ans = 0;

	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
	sort(a+1,a+n+1);
	for(int i = 1; i <= n; i++)
		ans += abs(i-a[i]);
	cout << ans << "\n";
}
