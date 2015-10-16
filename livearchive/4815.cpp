#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

map<int,int> g;
map<int,int> p;
set<pii> s;
int comp;

int find(int i){
	if(p[p[i]] != p[i]) p[i] = find(p[i]);
	return p[i];
}

bool join(int a, int b){
	if(a == b) return false;
	p[b] = a;	
	comp--;
	return true;
}

int main(){
	int k, w, x, y;

	while(scanf("%d %d", &k, &w) && k != 0){
		bool ok, bad = false;
		s.clear();
		g.clear();
		p.clear();
		comp = k;
		for(int i = 0; i < w; i++){
			scanf("%d %d", &x,&y);
			s.insert(pii(max(x,y),min(x,y)));
		}
		set<pii>::iterator it;
		for(it = s.begin(); it != s.end(); it++){
			int a = it->first;
			int b = it->second;

			if(p.find(a) == p.end())
				p[a] = a;
			if(p.find(b) == p.end())
				p[b] = b;
			
			ok &= join(find(a), find(b));

			if(g.find(a) == g.end())
				g[a] = 0;
			if(g.find(b) == g.end())
				g[b] = 0;
			g[a]++, g[b]++;
			
			if(g[a] > 2 || g[b] > 2) bad = true;
		}
		if (bad) puts("N");
		else if(!ok && comp == 1) puts("Y");
		else if (!ok && comp > 1 ) puts("N");
		else if (ok) puts("Y");
	}
}
