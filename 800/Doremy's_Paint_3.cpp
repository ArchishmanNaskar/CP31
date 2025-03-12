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
      while(n--){
        int x;
        fastscan(x);
        m[x]++;
      }
      if(m.size()==2 && abs(m.begin()->second-m.rbegin()->second)<=1)cout<<"Yes"<<"\n";
      else if(m.size()==1)cout<<"Yes"<<"\n";
      else cout<<"No"<<"\n";
    }
    
    return 0;
}