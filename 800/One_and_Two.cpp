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
      map<int,int> m;
      int count2=0;
      int i=n;
      while(i--){
        int x;
        fastscan(x);
        if(x==2){
          count2++;
          m[count2]=n-i;
        }
      }
      if(count2%2)cout<<-1<<"\n";
      else if(count2==0)cout<<1<<"\n";
      else cout<<m[count2/2]<<"\n";
    }
    
    return 0;
}