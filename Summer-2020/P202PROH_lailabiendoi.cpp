//P202PROH_lailabiendoi
//xanh luon ahihi
#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[51][51];

void doihang(int i){
	for(int j=0 ; j<m ; j++){
		a[i][j]=!a[i][j];
	}
}

void doicot(int j){
	for(int i=0 ; i<n ; i++){
		a[i][j]=!a[i][j];
	}
}
long long convert(int i){
	long long res=0;
	for(int j=0 ; j<m ; j++){
		if(a[i][j]==1) res+=pow(2,m-1-j);
	}
	return res;
}
int main(){
	cin>>n>>m;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0 ; i<n ; i++){
		if(a[i][0]==0) doihang(i);
	}
	for(int j=1 ; j<m ; j++){
		int dem=0;//dem so 0
		for(int i=0 ; i<n ; i++){
			if(a[i][j]==0) dem++;
		}
		if(dem>n-dem) doicot(j);
	}
//	cout<<"Sau khi bien doi: "<<endl;
//	for(int i=0 ; i<n ; i++){
//		for(int j=0 ; j<m ; j++){
//			cout<<a[i][j]<<" ";
//		}cout<<endl;
//	}
	long long ketqua=0;
	for(int i=0 ; i<n ; i++){
		ketqua+=convert(i);
	}
	cout<<ketqua<<endl;
}
