//P202PROE_dayngoacdungdainhat
//xanh
#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t;cin>>t;
	string str;
	while(t--){
		cin>>str;
		int MAX=0;
		stack<int> S;
		S.push(-1);
		for(int i=0 ; i<str.length() ; i++){
			if(str[i]=='(') {S.push(i);}
			else{
				S.pop();
				if(!S.empty()) {MAX=max(MAX,i - S.top());}
				else {S.push(i);}
			}
		}
		cout<<MAX<<endl;
	}
}
