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
//       int ans=0;
//       for(int i=1;i<=10;i++){
//         for(int j=1;j<=10;j++){
//           char c;
//           cin>>c;
//           if(c=='X'){
//             if(i==1||i==10||j==1||j==10)ans=ans+1;
//             else if(i==2||i==9||j==2||j==9)ans=ans+2;
//             else if(i==3||i==8||j==3||j==8)ans=ans+3;
//             else if(i==4||i==7||j==4||j==7)ans=ans+4;
//             else if(i==5||i==6||j==5||j==6)ans=ans+5;
//           }
//         }
//       }
//       cout<<ans<<"\n";
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

const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++)
            {
                a[i][j] = s[j];
            }
        }
        int total_score = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    total_score += score[i][j];
                }
            }
        }
        cout << total_score << endl;
    }
    return 0;
}