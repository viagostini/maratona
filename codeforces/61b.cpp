#include <bits/stdc++.h>
using namespace std;
typedef long long num;

string fix(char s[]){
    char ss[800];
    string st;
    int j = 0;
    for(int k = 0; k < strlen(s); k++)
        if(isalpha(s[k]))
            ss[j++] = tolower(s[k]);
        ss[j] = '\0';
        st = ss;
        return st;
}

int main(){
    vector<string> vs, gab;
    char s[800], ss[800];
    string st;
    int n;

    for(int i = 0; i < 3; i++){
        scanf(" %s", s);
        st = fix(s);
        vs.push_back(st);
    }

    sort(vs.begin(), vs.begin()+3);

    do {
        st.clear();
        for(int i = 0; i < vs.size(); i++)
            st += vs[i];
        gab.push_back(st);
    } while (next_permutation(vs.begin(), vs.begin()+3));

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf(" %s", s);
        st = fix(s);
        if(find(gab.begin(), gab.end(), st) != gab.end())
            puts("ACC");
        else puts("WA");
    }
}
