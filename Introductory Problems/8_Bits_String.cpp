#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
//000, 001, 010, 011, 100, 101, 110, and 111.

int main(){
	int n;
	cin>>n;
	long long ans=1;
	for(int i =0;i<n;i++){
		ans = (ans*2)%mod;
	}
	cout<<ans;
	return 0;
}