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
      int mul=1;
      int sum=0;
      int ans=0;
      while(n--){
        int x;
        fastscan(x);
        mul*=x;
        sum+=x;
      }
      if(sum<0){
        ans=abs(sum)/2 +abs(sum)%2;
        if(mul==-1){
          if(ans%2)cout<<ans<<"\n";
          else cout<<ans+1<<"\n";
        }
        else {
          if(ans%2)cout<<ans+1<<"\n";
          else cout<<ans<<"\n";
        }
      }
      else{
        if(mul==-1)cout<<1<<"\n";
        else cout<<0<<"\n";
      }
    }
    
    return 0;
}