#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main(){

	 int n,m;
	 cin >>n>>m;

	 vector<int> wt(n);
	 for(int i = 0;i < n; i++){
	 	cin>>wt[i];
	 }

	 sort(wt.begin(),wt.end());

	 int i = 0;
	 int j = n-1;
	 int c = 0;

	 while(i <= j){

	 		if(wt[i] + wt[j] <= m){
	 			i++;
	 			j--;
	 			c++;
	 			
	 		}
	 		else{
	 			j--;
	 			c++;	
	 		}
	 } 
	 cout<<c;

return 0;
}