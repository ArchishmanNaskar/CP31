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
      int ans=0;
      int count=0;
      int even=0;
      int odd=0;
      while(n--){
        int x;
        fastscan(x);
        if(x%2){
          if(even){
            if(count) ans+=count-1;
            count=1;
          }
          else count++;
          odd=1;
          even=0;
        }
        else{
          if(odd){
            if(count) ans+=count-1;
            count=1;
          }
          else count++;
          even=1;
          odd=0;
        }
      }
      ans+=count-1;
      cout<<ans<<"\n";
    }
    
    return 0;
}