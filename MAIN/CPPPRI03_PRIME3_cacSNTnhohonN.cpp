//CPPPRI03 - PRIME 3 - cac so nguyen to <=n
//xanh
#include<bits/stdc++.h>
using namespace std;

bool check(int x){
	if(x<2) return false;
	for(int i=2 ; i<=sqrt(x) ; i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=1 ; i<=n ; i++){
			if(check(i)) cout<<i<<" ";
		}
		cout<<endl;
	}
}
