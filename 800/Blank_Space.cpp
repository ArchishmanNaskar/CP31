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
      int current_count=0;
      while(n--){
        int x;
        fastscan(x);
        if(x){
          ans=max(ans,current_count);
          current_count=0;
        }
        else{
          current_count++;
        }
      }
      ans=max(ans,current_count);
      cout<<ans<<"\n";
    }    
    return 0;
}