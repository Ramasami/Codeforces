#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = "hello";
    int p1 = 0, p2 = 0;
    while (p1 < s.length() && p2 < 5)
    {
        if (s[p1] == t[p2])
        {
            p2++;
        }
        p1++;
    }
    if (p2 == 5)
        cout << "YES";
    else
        cout << "NO";
}