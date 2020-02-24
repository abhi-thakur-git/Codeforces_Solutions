/*
	"Karmanye vadhika raste, Ma phaleshu kadachana
	Ma karma phala he tur bhuh, ma te sangotsva karmanye"

	English Meaning ----> You have a right to “Karma” (actions) but never to any Fruits thereof. 
	You should never be motivated by the results of your actions, nor 
	should there be any attachment in not doing your prescribed activities.

*/
#include <bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<=b;i++)
//#include <iostream> if above is slow
using namespace std;

int maxone(int binary[],int n,bool allone){
	if(n==1){
		if(binary[0]==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	if(allone==true){
		return n-1;
	}
	int arr[n];
	
	loop(i,0,n-1){
		arr[i]=(binary[i]==0)? 1:-1;
	}
	int a,b,right,j;
	int a1,b1,left;
	a=0;
	b=0;
	a1=0;
	b1=0;
	loop(i,0,n-1){
		a=a+arr[i];
		a=(a<0)?0:a;
		if(b<a){
			b=a;
			right=i;
		}
		j=n-1-i;
		a1=a1+arr[j];
		a1=(a1<0)?0:a1;
		if(b1<a1){
			b1=a1;
			left=j;
		}
	}

	if(left>right){
		int temp2;
		temp2=right;
		right=left;
		left=temp2;
	}
	if(left==0 && right==n-1 && b==1){
		left=n-1-left;		
	}
	int count=0;
	loop(i,0,left-1){
		count=(binary[i]==1)?(count+1):count;
	}
	loop(i,left,right){
		count=(binary[i]==0)?(count+1):count;
	}
	loop(i,right+1,n){
		count=(binary[i]==1)?(count+1):count;
	}
	return count;
}
int main(){
	int n,temp;
	cin>>n;
	int binary[n];
	bool allone=true;
	loop(i,0,n-1){
		cin>>temp;
		if(temp==0){
			allone=false;
		}
		binary[i]=temp;
	}
	cout<<maxone(binary,n,allone);
	return 0;
}

