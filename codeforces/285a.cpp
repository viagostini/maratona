#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;

	scanf("%d%d", &n, &k);
	for(int i = 0; i < k; i++)
		printf("%d ", n-i);
	for(int i = 1; i <= n-k; i++)
		printf("%d ", i);
}
