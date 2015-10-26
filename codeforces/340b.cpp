#include <bits/stdc++.h>
using namespace std;
typedef long long num;

const int MAX = 305;
#define eps 0.00000001

struct ponto {
    int x, y;
} p[MAX];

inline double area (ponto a, ponto b, ponto c){
    return ((b.x - a.x) * (c.y - b.y) - (c.x - b.x) * (b.y - a.y)) * 0.5;
}

inline double cmp (double &x, double y){
    if(y - x > eps) x = y;
}

int main(){
    int n;
    double ans = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d%d", &p[i].x, &p[i].y);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            double maxiNeg = -1, maxiPos = -1;
            for(int k = 0; k < n; k++){
                if(k == i || k == j) continue;
                double x = area(p[i],p[j],p[k]);
                if(x > 0)
                    cmp(maxiPos, x);
                else
                    cmp(maxiNeg, -x);
            }
            if(maxiPos >= 0 && maxiNeg >= 0)
                cmp(ans, maxiPos+maxiNeg);
        }
    }
    printf("%lf\n", ans);
}