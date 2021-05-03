#include <iostream>
using namespace std;
 
int main()
{
    long long int t, a, b;
    cin >> t;
    while(t--){

        cin >> a >> b;
        if((a+b)%3 == 0 && (min(a,b)*2 >= max(a,b))){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}

    

/*

#include<iostream>
using namespace std;
#define lli long long int
int main(){
	lli t;
	cin>>t;
	while(t--){
		lli a,b;
		cin>>a>>b;
		int p1 = a;
		int p2 = b; 
        while(p1 > 0 && p2 > 0){
            	if(p1 % 2 == 0){
			p1-=2;
			p2-=1;
		}
		else{
			p1-=1;
			p2-=2;
			}
    	}	
		if(p1 == 0  && p2  == 0){
			cout<<"YES"<<"\n";

		}
		else{
			cout<<"NO"<<endl;
			
		 }
       
	}
	return 0;
}
*/ 