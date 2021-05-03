	#include <bits/stdc++.h>
	#define lli long long int
	#define li long int
	#define ld long double
	using namespace std;

	int main(){
		int n , x;
		cin >> n >>x;
		//Either use MAP or vector pair for index

		vector<pair<int,int>> arr(n);
		for(int i = 0; i < n; i++){
			cin >> arr[i].first;
			arr[i].second = i + 1;
			//Index start from 1
		}
		/*vector<int>vx;
		vex = arr;
		vector<int>ans;*/

		sort(arr.begin(),arr.end());

		int i = 0;
		int j = n-1;

		while (i < j)
	    {
		if (arr[i].first + arr[j].first == x)
		{
			cout << arr[i].second << " " << arr[j].second;
			return 0;
		}
		if (arr[i].first + arr[j].first < x)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}