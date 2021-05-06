#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int dp[n+1];
    for(int i = 1; i <= n; i++)dp[i] = 1e9;
    dp[0] = 0;
    for(int i =1; i <= n; i++)
    {
        int temp = i;
        while(temp != 0)
        {
            int x = temp % 10;
            dp[i] = min(dp[i],dp[i-x]+1);
            temp/=10;
        }
    }    
    cout<<dp[n];
    return 0;
}