#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int sum = 0;
	vector<int>arr(n);
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	
	sort(arr.begin(),arr.end());
	
	int x = sum / n;
    lli cost = 0;
    for(int i = 0; i < n; i++){
        cost+=abs(arr[i] - arr[n/2]);
    }
    cout<<cost;
	return 0;
}
// #include <bits/stdc++.h>
// #define lli long long int
// #define li long int
// #define ld long double
// using namespace std;

// lli costC(vector<int> arr, int t){
// 	lli cost = 0;
// 	for(int i = 0; i < arr.size(); i++){
// 		cost+=abs(t - arr[i]);
// 	}
// 	return cost;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int sum = 0;

// 	vector<int>arr(n);
// 	for(int i = 0; i < n; i++){
// 		cin>>arr[i];
// 		sum=sum+arr[i];
// 	}
// 	sort(arr.begin(),arr.end());
// 	int x = sum / n;
// 	cout<<costC(arr,x);

// 	return 0;
// }