#include <bits/stdc++.h>
using namespace std;
void fastscan(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int n;
    fastscan(n);
    int ans=INT_MAX;
    while(n--){
      int x;
      fastscan(x);
      ans=min(ans,abs(x));
    }
    cout<<ans<<"\n";
    return 0;
}