#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;

    int p = 5;
    int ans = 0;
    while((n/p)>0){
        ans+=n/p;
        p=p*5;        
    }
    /*
    for (int i = 5; n / i >= 1; i *= 5)
    {
        total += n / i;
    }
     */
    cout << ans;
    return 0;
}