#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t >> s;
    int ans = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            ans++;
    }
    cout << ans;
}