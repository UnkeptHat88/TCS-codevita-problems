#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n,t;
	cin>>n>>t;
	int a[n][t+1];
	int m[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<t+1;j++){
			if(j==0){
				a[i][j]=0;
			}else{
			cin>>a[i][j];
			}
		}
		cin>>m[i];
	}
	int mxi[n]={0};
	for(int i=2;i<t;i+=2){
		int max=0;
		for(int j=0;j<n;j++){
			a[j][i]=m[j]*(a[j][i]+a[j][i-1])+a[j][i-2];
			if(a[j][i]>max){
				max=a[j][i];
			}
		}
		for(int j=0;j<n;j++){
			if(a[j][i]==max){
				mxi[j]+=1;
			}
		}
	}
	int max=0;
	int mxiarr[n]={0},l=0;
	for(int i=0;i<n;i++){
		if(mxi[i]>max){
			max=mxi[i];
			mxiarr[l]=i;
			l++;
		}
	}
	int mxx=0,ri;
	max=0;
	for(int i=0;i<l;i++){
		if(a[mxiarr[i]][1]>max){
			mxx=a[mxiarr[i]][1];
			ri=mxiarr[i];
		}
	}
	cout<<ri+1<<endl;
	return 0; 
}
