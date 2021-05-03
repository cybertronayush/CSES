#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    ll sum = 0;
    for(int i = 1;i < n; i++){
        if(v[i] < v[i-1]){
            sum += abs(v[i-1] - v[i]);
            //Updating the value
            v[i] = v[i-1];
            //cout<<v[i]<<" ";
        }
    }
    cout<<sum;
    return 0;
}