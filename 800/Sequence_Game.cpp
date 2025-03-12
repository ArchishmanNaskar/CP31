#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> b(n), a;
        for (int i = 0; i < n; i++)
            cin >> b[i];
        a.push_back(b[0]);
        for (int i = 1; i < n; i++)
        {
            if (b[i] >= b[i - 1])
                a.push_back(b[i]);
            else
            {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout << a.size() << endl;
        for (auto it : a)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
//as there can be many solution we are devicing one algorithem
//that will be creating the a array and will giving the b array for sure after operation
//performed in the question
//if any in b i-1 element is lesser than or equal ot the i element then if in the original array
//they are in the same order then will the i th element will be included from a array to 
//b array while the operation but if that is not the case then and i th element is in the b array
//then oviously there will be an element before the i th element in the a array
//which is less than or equal to the i th element an we are inserting that  