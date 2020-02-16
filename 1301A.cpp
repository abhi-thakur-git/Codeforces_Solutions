#include <bits/stdc++.h>
//#include <iostream> if above is slow
using namespace std;
long long compute_hash(string const& s){
	int n=s.size();
	const int p=31;
	const int m=1e9+ 9;
	long long hash_value=0;
	long long p_pow=1;
	for(int i=0;i<n;i++){
		hash_value=(hash_value+ (s[i]-'a'+1)*p_pow)%m;
		p_pow=(p*p_pow)%m;
	}
	return hash_value;
}
bool check(string& a,string& b,string& c){
	int n=c.size();
	char temp;
	for(int i=0;i<n;i++){
		if(c[i]==b[i] && a[i]!=b[i]){
			//swap 
			temp=c[i];
			c[i]=a[i];
			a[i]=temp;
		}
		else if(c[i]==a[i] && a[i]!=b[i]){
			temp=c[i];
			c[i]=b[i];
			b[i]=temp;
		}
		else if(a[i]==b[i] && a[i]!=c[i]){
			return false;
		}
	}

	if(compute_hash(a)==compute_hash(b)){
		return true;
	}
	else{
		return false;
	}
	//check wether string a and b are equal or not
}

int main(){
int T;
cin>>T;
string a;
string b;
string c;
while(T--){
	cin>>a;
	cin>>b;
	cin>>c;
	if(check(a,b,c))
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
return 0;
}

