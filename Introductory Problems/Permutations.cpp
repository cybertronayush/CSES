#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin >> n;
	if (n == 1)
	{
		cout << "1" << endl;
 
	}
	else if (n == 3||n == 2)
	{
		cout<<"NO SOLUTION" << endl;
	}
	else
	{
		ll i, j;
		if (n % 2 == 0)
		{
			for ( i=2; i<=n;i =i+2)
			{
				cout << i << " ";
			}
			for (j=1;j <=n-1; j=j+2)
			{
				cout << j << " ";
			}
		}
		else {
			for (i = 1;i<= n;i=i +2)
			{
				cout << i << " ";
			}
			for (j=2; j<=n -1;j =j + 2)
			{
				cout <<j<< " ";
			}
		}
 
	}
 
 
	return 0;
 
}