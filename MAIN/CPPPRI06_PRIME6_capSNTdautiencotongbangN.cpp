//CPPPRI06 - PRIME 6 - cap snt dau tien co tong bang n
//xanh
#include<iostream>
#include<cmath>
using namespace std;

bool checkSNT(int x){
	if(x<2) return false;
	for(int i=2 ; i<=sqrt(x) ; i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=2 ; i<=n ; i++){
			if(checkSNT(i)&&checkSNT(n-i)) {cout<<i<<" "<<n-i<<endl;break;}
		}
	}
}

