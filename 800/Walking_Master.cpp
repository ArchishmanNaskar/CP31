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
      int a,b,c,d;
      fastscan(a);
      fastscan(b);
      fastscan(c);
      fastscan(d);
      if(d-b>=0 && c-a<=d-b){
        cout<<(d-b)+((a+(d-b))-c)<<"\n";
      }
      else cout<<-1<<"\n";
    }
    
    return 0;
}