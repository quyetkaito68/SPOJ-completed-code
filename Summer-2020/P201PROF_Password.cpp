//P201PROF_Password
//1 phát xanh ngay :))
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	int k;cin>>k;
	int temp;
	bool check=false,kocoa=true;
	ll Q[100001],dem=0;
	//neu ton tai 1 uoc cua no ma sau khi them so 0 sau do lai chia het cho n thi in ra
	for(ll i=1 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			ll a=i,b=n/i;
			temp=k;
			while(temp--){
				a*=10;
				b*=10;
			}
			if(a%n==0){
				cout<<a<<endl;
				check=true;
				kocoa=false;
				break;
			}
			if(b%n==0){
				Q[dem++]=b;
				check=true;
			}
		}
	}
	if(check==true&&kocoa==true) cout<<Q[dem-1]<<endl;
	if(check==false){
		temp=k;
		while(temp--){
			n = n*10;
		}
		cout<<n<<endl;
	}
}
