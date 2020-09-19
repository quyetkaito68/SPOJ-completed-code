//CPPPRI05 - PRIME 5 in ra tat ca cac so nguyen to tu m toi n
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
		int m,n;cin>>m>>n;
		for(int i=m ; i<=n ; i++){
			if(checkSNT(i)) cout<<i<<" ";
		}cout<<endl;
	}
}

