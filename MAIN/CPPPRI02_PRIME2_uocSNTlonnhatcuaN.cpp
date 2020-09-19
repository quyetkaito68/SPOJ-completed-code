//CCPPRI02 - PRIME 2 - dua ra uoc snt lon nhat cua n
//xanh roi hehe
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;//2<=n<=10^10
		long long max;
		if(n<2) cout<<"1";
		else{
			for(int i=2 ; i<=sqrt(n) ;){
				while(n%i==0){
					n/=i;
				}
				max=i;
				i++;
			}
			if(n>1) max=n;
			cout<<max;
		}		
		cout<<endl;
	}
	return 0;
}
