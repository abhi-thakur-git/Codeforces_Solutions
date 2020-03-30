#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
//#include <bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb(x) push_back(x)
#define ll long long 
using namespace std;
const int N=100001;
vector<int> g[N];
int n;
bool used[N];
ll c1=0;
ll c2=0;
void read(){
	scanf("%d",&n);
	int x,y;
	loop(i,1,n){
		scanf("%d%d",&x,&y);
		x--;y--;
		g[x].pb(y);
		g[y].pb(x);
	}	
}
void dfs(int v,bool color){
	used[v]=true;
	if(color) c1++;
	else c2++;
	for(auto u: g[v]){
		if(!used[u]){
			dfs(u,!color);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	read();
	dfs(0,0);
	cout<<c1*c2-(n-1);
	return 0;
}

