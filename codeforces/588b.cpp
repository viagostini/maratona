#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
const int MAX = 1000006;
int p[MAX];

void sieve(){
	for(int i = 2; i < MAX; i++){
		if(!p[i]){
			primes.push_back(i);
			for(int j = i; j < MAX; j += i)
				p[j] = 1;
		}
	}
}

int main(){
	long long n;
	memset(p, 0, sizeof p);
	cin >> n;
	sieve();	
	long long ans = 1;
	for(int i = 0; i < primes.size() && n > 1; i++){
		int pr = primes[i];
		if(n%pr == 0) ans *= pr;
		while(n%pr == 0) n /= pr;
	}
	ans *= n;
	cout << ans << "\n";
}
