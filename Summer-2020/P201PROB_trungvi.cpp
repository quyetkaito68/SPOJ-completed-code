//P201PROB_trungvi
//xanh
#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,S;cin>>n>>S;
	long a[n+5];
	for(long i=0 ; i<n ; i++) cin>>a[i];
	sort(a,a+n);
	long dem=0;
	if(a[n/2]==S) cout<<"0"<<endl;
	else if(S>a[n/2]){
		long i=n/2;
		while(S>a[i] && i<n){
			dem+=S-a[i];
			i++;
		}
		cout<<dem<<endl;
	}
	else{
		long i=n/2;
		while(S<a[i]&& i>=0){
			dem+=a[i]-S;
			i--;
		}
		cout<<dem<<endl;
	}
}
/*
9 8
1 2 3 6 5 4 9 8 7
out = 6
*/
