//CPPPRI04 - PRIME 4 - in ra uoc so nto nho nhat cua cac so tu 1 toi n
//xanh
#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		cout<<"1 ";
		for(int x = 2 ; x<=n ; x++)
			for (int i = 2 ; i<=x ; i++){
				if ((x%i == 0)) 			
				{cout<<i<<" ";break;}	
			}
		cout<<endl;
	}
	return 0;
}
