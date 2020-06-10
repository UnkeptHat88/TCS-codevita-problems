#include<iostream>
using namespace std;

int main(){
	
	int n,q;
	string s;
	cin>>n;
	cin>>s;
	cin>>q;

	for(int i=0;i<q;i++){
		int index;
		cin>>index;
		int oc=0;
		for(int i=index-2;i>=0;i--){
			if(s[index-1]==s[i]){
				oc++;
			}
		}
		cout<<oc<<endl;
	}

	return 0; 
}
