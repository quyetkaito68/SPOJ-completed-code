//P201PROD_xoachuso
//xanh
#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int tam=n/4;
		if(tam==0) tam=1;
		else if(n%4==1 || n%4==2 || n%4==3) tam+=1;
		for(int i=1 ; i<=n-tam ; i++){
			cout<<"9";
		}
		while(tam--){
			cout<<"8";
		}cout<<endl;
	}
}
