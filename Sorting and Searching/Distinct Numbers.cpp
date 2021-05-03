#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

set<int> convertset(vector<int>vx){
	set<int>s;
	for(auto j : vx){
		s.insert(j);
	}
	return s;
}
int main(){

	int n;
	cin>>n;
	set<int>s;
	int z = 0;
	for(int i = 0;i < n; i++){
		cin>>z;
		s.insert(z);
	}
	cout<<s.size()<<endl;
	return 0;
}