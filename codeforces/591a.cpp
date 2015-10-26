#include <bits/stdc++.h>
using namespace std;
typedef long long num;
typedef pair<num,num> par;

const int MAX = 1e5 + 2;

int main(){
    double l, p, q;

    cin >> l >> p >> q;

    double t = l/(p+q);
    cout << p * t << "\n";
}