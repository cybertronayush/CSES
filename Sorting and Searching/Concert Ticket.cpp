/*5 3
5 3 7 8 5
4 8 3*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n,x;
	cin>>n>>x;
	vector<int>tic(n);
	vector<int>cus(x);
	set<pair<int,int>>vec;
	for(int i =0; i < n;i++)
	{
	    cin>>tic[i];
	    vec.insert({tic[i],i});
	}

    for(int i =0;i<x;i++)
    {
        cin>>cus[i];
    }
    for(int i =0; i < x;i++)
    {
        auto xy = vec.lower_bound({cus[i]+1,0});
        if(xy == vec.begin())
        {
            cout<<-1<<"\n";
        }
        else
        {
            xy--;
            cout<<(*xy).first<<"\n";
            vec.erase(xy);
        }
    }
    
    return 0;
}