#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long ccount=1;
	long ans=1;
	for(int i = 1; i < s.length();i++){
		if(s[i] == s[i-1]){
			ccount++;
		}
		else{
			ccount=1;
		}
		ans = max(ccount,ans);
	}
	cout<<ans;


	return 0;
}