#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 1000006;

bool p[MAX];
set<num> pr;

int main(){
    int n;
    num x;

    cin >> n;
    memset(p,0,sizeof p);
    for(int i = 2; i < MAX; i++){
        if(!p[i]){
            pr.insert((num)i*i);
            for(int j = i; j < MAX; j += i)
                p[j] = true;
        }
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        if(pr.find(x) != pr.end())
            puts("YES");
        else puts("NO");
    }
}
