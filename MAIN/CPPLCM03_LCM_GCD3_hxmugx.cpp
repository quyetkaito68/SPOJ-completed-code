//CPPLCM03 - LCM & GCD 3
//xanh roi
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int t; 				//1<=t<=26
int n;				//1<=n<=60
ll a[61];			//1<=a[i]<=10000		cac so a khac nhau
int m=1e9+7;

void init(){
	cin>>n;
	for(int i=1 ; i<=n ; i++) cin>>a[i];
}

ll pow2(ll x, int y){
	ll res=1;
	for(int i=1  ;i<=y ; i++){
		res = res*x;
		res = res%m;
	}
	return res;
}
void solve(){
	ll hx=1;
	int gx=a[1];
	for(int i=1 ; i<=n ; i++) {
		hx = (long long) hx*a[i];
		hx = hx%m;
		gx=__gcd(gx,a[i]);	
	}
	ll res = pow2(hx,gx);
	res = res%m;
	cout<<res<<endl;
}
int main(){
	cin>>t;
	while(t--){
		init();
		solve();
	}
}

