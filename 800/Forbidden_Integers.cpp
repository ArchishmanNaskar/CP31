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
      int n,k,x;
      fastscan(n);
      fastscan(k);
      fastscan(x);
      if(k==1) cout<<"NO"<<"\n";
      else if(x!=1){
        cout<<"YES"<<"\n";
        cout<<n<<"\n";
        while(n--)cout<<1<<" ";
        cout<<"\n";
      }
      else if(k==2){
        if(n%2)cout<<"NO"<<"\n";
        else{
          n=n/2;
          cout<<"YES"<<"\n";
          cout<<n<<"\n";
          while(n--)cout<<2<<" ";
          cout<<"\n";
        }
      }
      else{
        if(n%2){
          n=n/2 -1;
          cout<<"YES"<<"\n";
          cout<<n+1<<"\n";
          while(n--)cout<<2<<" ";
          cout<<3<<" ";
          cout<<"\n";
        }
        else{
          n=n/2;
          cout<<"YES"<<"\n";
          cout<<n<<"\n";
          while(n--)cout<<2<<" ";
          cout<<"\n";
        }
      }
    }
    
    return 0;
}