#include <bits/stdc++.h>
using namespace std;

int n, one = 0, zero = 0;
int main(){
	char c;

	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf(" %c", &c);
		(c == '1') ? one++ : zero++;
	}
	printf("%d\n", abs(one-zero));
}
