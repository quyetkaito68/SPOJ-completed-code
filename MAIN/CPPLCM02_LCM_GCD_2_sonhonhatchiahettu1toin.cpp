//CPPLCM02 - LCM & GCD 2 - so nguyen nho nhat chia het cho cac so tu 1 toi n.
//xanh
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll a,ll b){
	ll r;
	while(b != 0){
		r=a%b;
		a=b; b=r;
	}
	return a;
}

int main(){
	int t;
	ll n;
	cin>>t;
	while(t--){
		cin>>n;
		ll r=1;
		for (ll i = 2 ; i<=n ; i++){
			//r=r*i/GCD(r,i);
			r = r*i/__gcd(r,i);
		}
		cout<<r<<endl;
	}
	return 0;
}
