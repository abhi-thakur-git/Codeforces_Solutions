/*
	"Karmanye vadhika raste, Ma phaleshu kadachana
	Ma karma phala he tur bhuh, ma te sangotsva karmanye"

	English Meaning ----> You have a right to “Karma” (actions) but never to any Fruits thereof.
	You should never be motivated by the results of your actions, nor
	should there be any attachment in not doing your prescribed activities.

*/
//#include <iostream> if above is slow
#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	int max1=(x+y)*z;
	int max2=(z+y)*x;
	int max3=x+y+z;
	int max4=x*y*z;
	cout<<max(max1,max(max2,max(max3,max4)));

return 0;
}

