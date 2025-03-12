#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0;
        int r = n - 1;
        int added_characters = 0;

        while (l < r) {
            if (s[l] != s[r]) 
                added_characters += 2;
            else 
                break;
            l++;
            r--;
        }
        cout << (n - added_characters) << "\n";
    }

    return 0;
}
