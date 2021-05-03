#include<bits/stdc++.h>
using namespace std;
/*
Intution_ (Maths Behind)-For Repetition
https://www.mathwarehouse.com/probability/permutations-repeated-items.php#:~:text=(total%20number%20of%20letters)!,(number%20of%20repeats)!&text=If%20A%20out%20of%20N,the%20N%20items%20is%20N!&text=If%20a%20set%20of%20N,of%20N%20objects%20is%20N!
(Total Number of Char)!/(Number of repeated)!
aabac
(5!)/(3!) = 20
*/
//Trick = next_permutation()
int main(){
    
    string x;
    cin>>x;
    vector<string>vc;
    sort(x.begin(),x.end());
    
    do{
        vc.push_back(x);
    }
    while(next_permutation(x.begin(),x.end()));
     
    cout<<vc.size()<<endl;
    for(string y : vc){
        cout<<y<<endl;
    }
	return 0;	
}
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
set<string> se;
string a;

void permute(int l, int r)  
{  
    // Base case  
    if (l == r)  
        se.insert(a); 
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
            swap(a[l], a[i]);  
            permute(l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
 
signed main()
{
    cin>>a;
    permute(0, (int)a.size()-1);
    cout<<(int)se.size()<<"\n";
    for(string s : se)
        cout<<s<<"\n";
 
 
    return 0;   
}*/