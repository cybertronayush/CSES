#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(x) (int)(x).size()

int main() {
	int n;
	vector<int>x; 
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int z; cin >> z;
		int lo = 0, hi = sz(x);
		
		while (lo < hi) {
			int mid = (lo+hi)/2;
			if (x[mid] > z) hi = mid;
			else lo = mid+1;
		}
		if (lo == sz(x)) x.pb(z); 
		else x[lo] = z; 
	}
	cout << sz(x);
} 