
//Sucessful

#include<iostream>
using namespace std;

void solve(){
	string p,s;
	cin>>p>>s;
	for(unsigned int i=0;i<p.length();i++){
		for(unsigned int j=0;j<s.length();j++){
			if(p[i]==s[j]){
				cout<<p[i];
			}
		}
	}
	cout<<endl;
}

int main(){

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		solve();
	}

	return 0; 
}
