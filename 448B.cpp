#include <bits/stdc++.h>
using namespace std;

//function to make every value of array 0
void init(int array[]){
	for(int i=0;i<26;i++){
		array[i]=0;
	}
}
//initialize the array counting frequency of each letter
//consider abcee , its array will be {1,1,1,0,2,0,0,0........}

void indexarr(int arrayone[],int length1,string one){
	for(int i=0;i<length1;i++){
		arrayone[one[i]-'a']=arrayone[one[i]-'a']+1;
	}
}

int main()
{	//taking input 
	string one,two;
	cin>>one>>two;
	
	int flag,i,j;
	//getting size of each string
	int length1=one.size();
	int length2=two.size();
	//declaring two array for both strings
	int arrayone[26]={};
	int arraytwo[26]={};
	//nullify the array
	init(arrayone);
	init(arraytwo);
	//initialize the array
	indexarr(arrayone,length1,one);
	indexarr(arraytwo,length2,two);


	flag=1;
	i=0;
	j=0;
	int counter=0;
	/*first we calculate wether our first string contains second string in order 
	consider "automation" it contains "toton" not connected directly but letters are in sequence
	means we can remove letters to get our second string
	*/
	while(i<length1){
		if(one[i]==two[j]){
			j++;
			counter++;
		}
		i++;
	}
	if(counter==length2){
		cout<<"automaton"<<endl;
	}
	/*else we will have to count frequency of each letter and one by one first rule out possibility of
	1. if alphabets are just rearranged : case of "array"
	2. if alphabets are more and rearranged : case of "both"
	3. if second string contains some alphabets which first doesn't : case of need tree
	*/
	else{
		int equals=1;
		int greaters=1;
		int lesser=1;
		for(int i=0;i<26;i++){
			if(arrayone[i]!=arraytwo[i] && arrayone[i]!=0){
				equals=0;
				break;
			}
		}
		if(equals==1){
			cout<<"array"<<endl;
		}
		else{
			for(int i=0;i<26;i++){
				if(arrayone[i]<arraytwo[i]){
					greaters=0;
					break;
			}
		}
		if(greaters==1){
			cout<<"both"<<endl;
		}
		else{
			cout<<"need tree"<<endl;
		}
	}
	}
	return 0;
}
