#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main()
{

	int n, x, y, cx = 0, total = 0;
	vector<pair<int, int>> movie;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		movie.push_back(make_pair(y, x));
	}

	sort(movie.begin(), movie.end());
	int count=0;
	int i = 0;
	int eol = -1;
	
    for(auto x : movie){
        if(x.second >= cx){
            cx = x.first;
            count++;
        }
    }
    cout<<count;
return 0;
}