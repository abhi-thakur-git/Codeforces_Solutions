//#include <iostream> if above is slow
#include <bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb(x) push_back(x)
using namespace std;

int n;
const int N=2000;
vector<int> g[N];
map<string,int> m;
bool used[N];
int level[N];

void input(){
	cin>>n;
	int j=1;
	string a,b,c;
	m["polycarp"]=0;
	loop(i,0,n){
		cin>>a>>b>>c;
		transform(a.begin(),a.end(),a.begin(),::tolower);
		transform(c.begin(),c.end(),c.begin(),::tolower);
		m[a]=j;
		g[m[c]].pb(m[a]);
		g[m[a]].pb(m[c]);
		j++;
	}	
}
//void dfs(int u){
//	used[u]=true;
//	printf("%d",u);
//	for(auto v: g[u]){
//		if(used[v]==false) dfs(v); 
//	}
//}
void bfs(int u){
	used[u]=true;
	queue<int> q;
	q.push(u);
	level[u]=1;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto w: g[v]){
			if(!used[w]){
				level[w]=level[v]+1;
				used[w]=true;
				q.push(w);
			}
		}
	}
	cout<<*max_element(level,level+N);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	input();
	bfs(0);
	
	return 0;
}

