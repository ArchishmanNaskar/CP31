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
      int n,a,b;
      fastscan(n);
      fastscan(a);
      fastscan(b);
      if(n==1) cout<<"Yes"<<"\n";
      else{
        if(n-a-b>=2 || (n==a && n==b)) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
      }
    }
    
    return 0;
}