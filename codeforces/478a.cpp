#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, sum = 0;

	for(int i = 0; i < 5; i++){
		cin >> n;
		sum += n;
	}

	if(sum % 5 == 0 && sum > 0)
		printf("%d\n", sum/5);
	else
		puts("-1");
}
	
