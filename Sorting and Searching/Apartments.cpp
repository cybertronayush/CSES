#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
int main(){

	int n,m,k;
	cin >>n>> m>> k;
	//vector<Apartment>
	vector<int> apl(n);
	vector<int> apa(m);
	for(int i = 0; i < n; i++)
        cin >> apl[i];
    for(int i = 0; i < m; i++)
        cin >> apa[i];
	sort(apl.begin(),apl.end());
	sort(apa.begin(),apa.end());
	//2pointer :
	int ans=0;
	int i = 0;
	int j = 0;
    while (i < n && j < m)
    {
        if (abs(apl[i] - apa[j]) <= k){
            ans++;
            i++;
            j++;
        }
        else if (apl[i] < apa[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << ans;
    return 0;
}