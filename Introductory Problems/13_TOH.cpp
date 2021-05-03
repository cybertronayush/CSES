#include<bits/stdc++.h>
using namespace std;

int toh(int n){
    if(n == 0){
        return 0;
    }
    //Taking out n-1 from s to h
    //Moving 1-source to Des
    //recursion will do it for others
    
    return toh(n-1)+1+toh(n-1);
}

void printsteps(int n,char source,char des,char helper){
    if(n == 0){
        return;
    }
    
    printsteps(n-1,source,helper,des);
    cout<<source<<" "<<des<<endl;
    printsteps(n-1,helper,des,source);
    
}
int main(){
    int n;
    cin>>n;
    
    cout<<toh(n)<<endl;
    printsteps(n,'1','3','2');
    return 0;
    
}