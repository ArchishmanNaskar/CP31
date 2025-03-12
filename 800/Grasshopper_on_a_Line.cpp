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
      int x,k;
      fastscan(x);
      fastscan(k);
      if(x%k){
        cout<<1<<"\n";
        cout<<x<<"\n";
      }
      else{
        cout<<2<<"\n";
        cout<<1<<" "<<x-1<<"\n";
      }
    }
    
    return 0;
}