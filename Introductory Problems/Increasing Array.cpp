#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	// vector<ll>v2;
  // copy(v.begin(), v.end(), back_inserter(v2));
	
	ll n;
	cin >> n;
	ll ar[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	ll count = 0, dif = 0;
 
	for (ll j = 0; j < n - 1; j++)
	{
		dif = 0;
		if (ar[j + 1] < ar[j])
		{
			dif = ar[j] - ar[j + 1];
			ar[j + 1] = ar[j ] ;
			count = count + dif;
		}
 
	}
	cout <<  count << endl;
 
 
}
