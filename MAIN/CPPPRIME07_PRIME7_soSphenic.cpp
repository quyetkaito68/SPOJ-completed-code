//CPPPRI07 - PRIME 7 - so Sphenic - 
//so phan tich thanh duy nhat 3 so khac nhau
//xanh
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int dem,dem2=0,stop=1,i=2;
		while(n!=1){
			if (n%i ==0){
				dem=0;
				while(n%i == 0){
					dem++;
					n/=i;
				}
				if (dem>1) {
					cout<<"0"<<endl;
					stop=0;
					break;	
				}
				else dem2++;
			}
			i++;
		}
		if (dem2 == 3) cout<<"1"<<endl;
		else if (stop == 1 ) cout<<"0"<<endl;
	}
	return 0;
}
