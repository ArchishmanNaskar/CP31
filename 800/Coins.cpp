#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
void fastscan(long long &number)
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
    LL t;
    fastscan(t);
    while(t--){
      LL n,k;
      fastscan(n);
      fastscan(k);
      if(n>=k || n>=2){
        if(n%2){
          if(n==1 && k==1) cout<<"YES"<<"\n";
          else if(n==1)cout<<"NO"<<"\n";
          else{
            if(k%2==0)cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
          }
        }
        else{
          cout<<"YES"<<"\n";
        }
      }
      else cout<<"NO"<<"\n";
    }
    return 0;
}
