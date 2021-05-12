//k
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
    lli maxSubArray(lli n,vector<lli>& nums) {
        
        lli sum = 0; 
        lli X = INT_MIN;
        
        for(auto num : nums){
            sum +=num;
            X = max(X,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return X;
    }
int main(){
    
    lli n;
	cin>>n;
	vector<lli>vec(n);
	for(int i =0; i < n;i++)
	{
	    cin>>vec[i];
	}
	cout<<maxSubArray(n,vec);
	return 0;

}