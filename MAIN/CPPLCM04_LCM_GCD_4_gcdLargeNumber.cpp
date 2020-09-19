//xanh roi hehe
//GCD large Number
//CPPLCM04 - LCM & GCD 4
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int t;				
ll a;				//1<=a<=10^12
string b;			//1<=b<=10^250
ll m=1e9+7;

void init(){
	cin>>a>>b;
}

void solve(){
	ll B=0,res;
	for(int i=0 ; i<b.length() ; i++){
		B=(B*10+(b[i]-'0'))%a;
	}
	res=__gcd(a,B);
	cout<<res<<endl;
}

int main(){
	cin>>t;
	while(t--){
		init();solve();
	}
	return 0;
}

