#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a = string(1,s[0]);
        for (int i = 1; i < s.length(); i += 2)
        {
            a += s[i];
        }
        cout << a << "\n";
    }
    return 0;
}