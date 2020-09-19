//CPPLCM07 - LCM & GCD 7
//xanh
#include<iostream>
#include<cmath>
using namespace std;
#define ll long long int 

ll LCM(ll a, ll b){
	ll x = a*b;
	while(b!=0)
	{
		ll r = a%b;
		a = b;
		b = r;
	}
	return x/a;
}

int main(){
	ll x,y,z,n;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z>>n;
		ll bcnn = LCM(x,LCM(y,z));
	//	cout<<bcnn<<endl;
		ll a = pow(10,n-1);
		ll b = pow(10,n)-1;
		if(a % bcnn == 0) cout<<a<<endl; //so chu so == bcnn
		else if(bcnn > b) cout<<"-1"<<endl;
		else 
		{
			ll c = a % bcnn;
			cout<<bcnn+a-c<<endl;
		}
		
	}
}
