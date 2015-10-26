#include <bits/stdc++.h>
using namespace std;
typedef long long num;
typedef pair<num,num> par;

const int MAX = 1e5 + 2;

vector<par> bits;

int main(){
    int t, n;
    num x[MAX];

    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x[i];
            bits.push_back(par(__builtin_popcountll(x[i]),i));
        }
        sort(bits.begin(), bits.end());
        for(int i = 0; i < n; i++)
            cout << x[bits[i].second] << " ";
        cout << endl;
        bits.clear();
    }
}
