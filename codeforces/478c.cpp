#include <bits/stdc++.h>
using namespace std;

int main(){
    long long in[3];

    cin >> in[0] >> in[1] >> in[2];
    sort(in,in+3);
    if(2*in[0] + 2*in[1] <= in[2])
        cout << in[0]+in[1] << endl;
    else cout << (in[0]+in[1]+in[2])/3 << endl;
}
