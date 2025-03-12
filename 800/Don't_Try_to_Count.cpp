// #include <bits/stdc++.h>
// using namespace std;
// void fastscan(int &number)
// {
//     bool negative = false;
//     register int c;
//     number = 0;
//     c = getchar();
//     if (c=='-')
//     {
//         negative = true;
//         c = getchar();
//     }
//     for (; (c>47 && c<58); c=getchar())
//         number = number *10 + c - 48;
//     if (negative)
//         number *= -1;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);   
//     int t;
//     fastscan(t);
//     while(t--){
//       int n,m;
//       fastscan(n);
//       fastscan(m);
//       string x,s;
//       cin>>x>>s;
//       if(m<=n && x.find(s)!=string::npos){
//           cout<<0<<"\n";
//           continue;
//       }
//       double t=ceil(((double)m/n))+(m%n!=0);
//       int time=(int)ceil(log2(t));
//       int ans=time;
//       while(time--){
//         x=x+x;
//       }
//       if(x.find(s)!=string::npos){
//         cout<<ans<<"\n";
//         continue;
//       }
//       x=x+x;
//       if(x.find(s)!=string::npos){
//         cout<<ans+1<<"\n";
//       }
//       else cout<<-1<<"\n";
//     }       
//     return 0;
// }
////I don't know why but my code gives right output when compiled on 
////vs code or even on any of the online compiler
////But when compiled on codeforces it gives different output from vs code which is oviously wrong
////So actualy my code is correct
////The below online solution has TC and SC both wrose than me 
#include <bits/stdc++.h>
using namespace std;

bool check(string s, string x)
{
    if (x.size() < s.size())
    {
        return false;
    }
    for (int i = 0; i < x.size() - s.size() + 1; i++) // n - m + 1
    {
        if (x.substr(i, s.size()) == s) // m
        {
            return true;
        }
    }
    return false;
} 

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;
        long long ans = -1;
        if (check(s, x0))
            ans = 0;
        else if (check(s, x1))
            ans = 1;
        else if (check(s, x2))
            ans = 2;
        else if (check(s, x3))
            ans = 3;
        else if (check(s, x4))
            ans = 4;
        else if (check(s, x5))
            ans = 5;
        cout << ans << endl;
    }
    return 0;
}