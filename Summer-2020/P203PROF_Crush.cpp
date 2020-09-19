//P203PROF_Crush
//xanh
#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;cin>>n;
	long a[n+1];
	long long sum=0;
	for(long i=0 ; i<n ; i++) {cin>>a[i];sum+=a[i];}
	sort(a,a+n);
	if(sum%2!=0) cout<<sum;
	else{
		for(long i=0 ; i<n ; i++){
			if(a[i]%2!=0) {sum-=a[i];break;}
		}
		cout<<sum;
	}
}
