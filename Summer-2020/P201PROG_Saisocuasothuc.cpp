//P201PROG_Saisocuasothuc
//xanh
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long f[101];
	f[0]=0;
	f[1]=1;
	f[2]=1;
	for(int i=3 ; i<=n ; i++){
		f[i] = f[i-1]+f[i-2];
	}
	cout<<f[n]<<endl;
}
