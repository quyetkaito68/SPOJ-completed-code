//CCPPRI01 - PRIME 1
//xanh roi hehe
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		if(n<2) cout<<"1";
		else{
			for (int i=2 ; i<=sqrt(n) ;){
				while(n%i==0){
					cout<<i<<" ";
					n/=i;
				}
				i++;
			}
			if(n>1) cout<<n;
		}
		cout<<endl;
	}
	return 0;
}
