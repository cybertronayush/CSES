#include<bits/stdc++.h>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main()
{
    lli n;
    cin >> n;
    lli total = n * (n + 1) / 2;
    if (total & 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<lli> arr1, arr2;
        total /= 2LL;
        while (n)
        {
            if (total - n >= 0)
            {
                arr1.push_back(n);
                total -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (li ele : arr1)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (li ele : arr2)
            cout << ele << " ";
    }
    return 0;
}