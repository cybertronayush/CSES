#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int mod = 1e9+7;
  int n;
  cin >> n;
  vector<int> dp(n+1,0);
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 6 && i-j >= 0; j++) {
      (dp[i] += dp[i-j]) %= mod;
    }
  }
  cout << dp[n] << endl;
}
/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int mod = 1e9+7;
  int n;
  cin >> n;
  vector<int> dp(n+1,0);
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 6 && i-j >= 0; j++) {
      (dp[i] += dp[i-j]) %= mod;
    }
  }
  cout << dp[n] << endl;
}
/*
#include<bits/stdc++.h>

using namespace std;

int main(){
    int mod = 1e9+7;
    long long int n;
    cin>>n;
    
    vector<long long int>dp(n+1,0);
    
    dp[0]=1;
    dp[1]=1;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= 6; j++){
             if(j > i) continue;
                 dp[i] = (dp[i]%mod + dp[i-j]%mod)%mod;
        }
    }
    cout<<dp[n]%mod;
    
    return 0;
}
*/