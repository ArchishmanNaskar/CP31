#include <bits/stdc++.h>
using namespace std;
///basically no matter what the configuration of the given array is it always can be sorted by performing
///a number of the the given operations 
///but
///using the the given operations the element at the index 0 can not be updated
///so the element at the position 0 of the given array must be 1
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) // n
            cin >> a[i];
        if (a[0] == 1) // 1
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}