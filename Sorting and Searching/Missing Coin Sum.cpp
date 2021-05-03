#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main(){

	int n;
	cin>>n;
	vector<int>coins(n);
	
	for(int i = 0; i < n; i++){
		cin>>coins[i];
	}
	sort(coins.begin(),coins.end());

	lli an = 1;
    lli count;

	for(int i =0; i < n; i++){
		if(an < coins[i]) break;
		else{
			an+=coins[i];
		}
	}
	cout<<an<<endl;
	return 0;
}