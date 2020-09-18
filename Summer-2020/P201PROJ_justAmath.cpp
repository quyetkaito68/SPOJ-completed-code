//P201PROJ_justAmath
//xanh le haha
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll A;
		ll B;
		cin>>A>>B;
		int dem=0;
		for(ll i=9 ; i<=B ; i= i*10+9){
			if((i+1)%10==0) dem++;
		}
		cout<<dem*A<<endl;
	}
}
