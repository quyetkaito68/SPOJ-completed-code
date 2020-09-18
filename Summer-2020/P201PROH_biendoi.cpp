//P201PROH_biendoi
//chua nop duoc
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll a_=a,k=0;
		bool check=false;
		if(a>=1){
			while(a<b){
				if(a<=a_ && k>2) break;
				if(a%2==0) a = a*3/2;
				else a = a-1;
				k++;
			}
		}	
		if(a>=b) check=true;
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
