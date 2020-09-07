//CPPLCM01 - LCM & GCD 1
//xanh
#include<iostream>
using namespace std;

long long GCD(long long a,long long b){				// greatest common divisor (uoc chung lon nhat)
	while(a!=b){
		if(a>b) a=a-b;
		if(a<b) b=b-a;
	}
	return a;
}

long long LCM(long long a,long long b){				// least common multiple (boi chung nho nhat)
	long long c=a*b;
	return c/GCD(a,b);	
}

int main(){
	int T;
	long long a,b;
	long long lcm, gcd;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>a>>b;
		lcm = LCM(a,b);
		gcd=GCD(a,b);
		cout<<lcm<<" "<<gcd<<endl;
	}
	return 0;	
}
