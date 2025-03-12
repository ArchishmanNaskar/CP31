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
      int i=n;
      int array_xor=0;
      while(i--){
        int x;
        fastscan(x);
        array_xor=array_xor^x;
      }
      if(n%2){
        cout<<array_xor<<"\n";
      }
      else{
        if(array_xor==0) cout<<array_xor<<"\n";
        else cout<<-1<<"\n";
      }
    }
    
    return 0;
}