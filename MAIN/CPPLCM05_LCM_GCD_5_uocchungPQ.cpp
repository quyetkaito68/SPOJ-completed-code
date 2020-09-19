//CPPLCM05 lcm gcd 5
//xanh
#include<bits/stdc++.h>
using namespace std;

long long t,A,x,y;
long long GCD(long long a, long long b){
	long long tmp;
	while(b != 0){
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}

int main(){
	cin>>t;
	while(t--){
		cin>>A>>x>>y;
		//long long r=GCD(x,y);
		long long r = __gcd(x,y);
		for(int i=0;i<r;i++)
		{
			cout<<A;
		}
		cout<<"\n";
	}
}

