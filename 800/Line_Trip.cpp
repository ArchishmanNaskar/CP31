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
    int t;
    fastscan(t);
    while(t--){
      int n,x;
      fastscan(n);
      fastscan(x);
      int a1=0,a2;
      fastscan(a2);
      int ans=a2-a1;
      a1=a2;
      for(int i=1;i<n;i++){
        fastscan(a2);
        ans=max(ans,a2-a1);
        a1=a2;
      }
      if(a1!=x)ans=max(ans,2*(x-a1));
      cout<<ans<<"\n";
    }
    return 0;
}