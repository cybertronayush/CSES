#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n; 
  int target;
  int mod = 1e9+7;
  cin>>n>>target;
  vector<int> c(n);
  
  for(int i =0; i < n; i++){
      cin>>c[i];
  }
  vector<int> dp(target+1,0);
  //Base - Making 0 would be one way
  dp[0] = 1;
  for (int i = 1; i <= target; i++) {
    for (int j = 0; j < n; j++) {
      if (i-c[j] >= 0) {
	(dp[i] += dp[i-c[j]]) %= mod;
      }
    }
  }
  cout << dp[target] << endl;
}