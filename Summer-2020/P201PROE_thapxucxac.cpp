//P201PROE_thapxucxac
//xanh
#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		bool check=false;
		if(n==0) cout<<"YES"<<endl;
		else if(n<15) cout<<"NO"<<endl;
		else if(n>=15&&n<=20) cout<<"YES"<<endl;
		else{
			long long x = n- (long long)(n/14)*14;
			if(x<7&&x>0) check=true;
			if(check) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
