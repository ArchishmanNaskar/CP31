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
      int n;
      fastscan(n);
      int diff=INT_MAX;
      int a1;
      fastscan(a1);
      int a2;
      n--;
      while(n--){
        fastscan(a2);
        diff=min(diff,a2-a1);
        a1=a2;
      }
      if(diff<0) cout<<0<<"\n";
      else cout<<diff/2 +1<<"\n";
    }
    
    return 0;
}