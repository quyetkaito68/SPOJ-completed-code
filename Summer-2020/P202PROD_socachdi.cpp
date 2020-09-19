//P202PROD_socachdi
//xanh
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long L[n+6];
		L[0]=1;
		L[1]=1;
		L[2]=2;
		L[3]=4;
		L[4]=7;
		for(int i=4 ; i<=n ; i++){
			L[i]=L[i-1]+L[i-2]+L[i-3]+L[i-4];
		}
		cout<<L[n]<<endl;
	}
}
