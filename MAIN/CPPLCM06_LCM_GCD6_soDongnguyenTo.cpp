//CPPLCM06_LCM_GCD6_soDongnguyenTo
//xanh
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll n, ll m){
	long long s = (n * n + n) / (2);
    long long s1 = s + m, s2;
    if( s1 % 2 != 0 || m >= s)
        return false;
    s1 = s1 / 2;
    s2 = s1 - m;
    if(__gcd(s1, s2) == 1)
        return true;
    return false;
}
int main(){
	int t;cin>>t;
	while(t--){
		ll n,m;cin>>n>>m;
		if(check(n,m)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}	
}
