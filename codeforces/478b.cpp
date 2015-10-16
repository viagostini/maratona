#include <bits/stdc++.h>
using namespace std;
typedef long long num;

num c (num n){
	return (n*(n-1)/2);
}

int main(){
	num n, m;

	cin >> n >> m;

	num r = n % m;
	num div = n / m;

	num mini = r * (c(div+1)) +  (m-r) * c(div);
	num maxi = c((n-m+1));

	cout << mini << " " << maxi << endl;
}
