#include <bits/stdc++.h>
using namespace std;

int main(){
	int in[3];

	cin >> in[0] >> in[1] >> in[2];
	sort(in, in+3);

	int ans = 0;
	ans += in[0];
	for(int i = 0; i < 3; i++)
		in[i] -= ans;
	if(in[1] + in[2] > 2) ans += in[1];
	printf("%d\n", ans);
}
