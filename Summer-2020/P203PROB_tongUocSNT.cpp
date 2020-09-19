//P203PROB_tongUocSNT
//xanh
#include<bits/stdc++.h>
using namespace std;

long phantich(long n){
	long long result=0;
	for(long i=2 ; ; i++){
		while(n%i==0){
			result+=i;
			n/=i;
		}
		if(n==1) break;
	}
	return result;
}
int main(){
	long n;cin>>n;
	long a[100001];
	long long res=0;
	for(int i=0 ; i<n ; i++) {cin>>a[i];res+=phantich(a[i]);}		
	cout<<res;
}
