#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
  int n,pass=1;
  cin >> n;
  
 vector<int>a(n);
 vector<int>b(n);
  for(int &x:a)
    cin >> x,x--;
    
  for(int i=0;i<n;i++)
    b[a[i]]=i;
    
  for(int i=1;i<n;i++)
    pass+=b[i]<b[i-1];
    cout<<pass;
}