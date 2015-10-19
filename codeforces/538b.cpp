#include <bits/stdc++.h>
using namespace std;
typedef long long num;

vector<int> ans;

int main(){
    int n;

    scanf("%d", &n);
    while(n){
        int a = n, x = 0, d = 1;
        while(a){
            if(a%10) x += d;
            a /= 10, d *= 10;
        }
        ans.push_back(x);
        n -= x;
    }
    printf("%d\n", ans.size());
    for(int i = 0; i < ans.size(); i++)
        printf("%d ", ans[i]);
}
