//P202PROJ_demcap
//xanh
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	string str="";
	int check=0,dem1=0;
	for(int i=0 ; i<s.length() ; i++){
		if(s[i]=='1') {str+='1';check=1;dem1++;}
		else if(check!=0 && s[i]=='2') {str+='2';}
	}
	int len = str.length()-1;
	while(str[len]=='1'){
		len--;
		dem1--;
	}
	long res=0;
	for(int j=0 ; j<=len ; j++){
		if(str[j]=='1'){
			dem1--;
			res+=(len-j)-dem1;
		}
	}
	cout<<res<<endl;
}
/*
2017201820192020
out
9

*/
