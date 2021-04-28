#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin>>n;
   int sum = 0;
   int arr[n-1];
   for(int i = 0 ; i < n-1; i++){
       cin>>arr[i];
   }
   for(int i = 0; i < n-1; i++){
       sum = sum+arr[i];
   }
   int x = n*(n+1) / 2;
   int res = x-sum;
   cout<<res;
}