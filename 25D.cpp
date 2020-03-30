#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb(x) push_back(x)
#define F first
#define S second
using namespace std;
const int N=1000;
int parent[N];
int n;
int spare_edge[N];
vector<pair<int,int>> eop;
vector<pair<int,int>> eis;
bool check[N];

void make_set(int v){
	parent[v]=v;
}
int find_set(int v){
	if(v==parent[v]) return v;
	find_set(parent[v]);
}
void union_set(int a,int b){
	int fq=a;
	int fg=b;
	a=find_set(a);
	b=find_set(b);
	if(a==b) {
	spare_edge[a]++;
	eop.pb(make_pair(fq,fg));
	}
	if(a!=b) {
		parent[a]=b;
		loop(i,0,n){
			if(parent[i]==a){
				parent[i]=b;
			}
		}
	}
}
void read(){
		scanf("%d",&n);
		int x,y;
		loop(i,0,n){
			make_set(i);
		}
		loop(i,1,n){
			scanf("%d%d",&x,&y);
			x--;y--;
			union_set(x,y);
		}		
	}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	read();
	int count=0;
	vector<int> pp;
	loop(i,0,n){
		if(check[parent[i]]==false){
			check[parent[i]]=true;
			pp.pb(parent[i]);
			count++;
		}
	}
	loop(i,0,pp.size()-1){
		eis.pb(make_pair(pp[i],pp[i+1]));
	}
	int road=count-1;
	//roads print parents-1 loop
	cout<<road<<endl;
	int j=0;
	loop(i,0,road){
		cout<<(eop[j].F)+1<<" "<<(eop[j].S)+1<<" ";
		cout<<(eis[j].F)+1<<" "<<(eis[j].S)+1<<endl;
		j++;
	}
	return 0;
}

