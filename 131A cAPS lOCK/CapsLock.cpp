#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool caps = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (!isupper((s[i])))
        {
            caps = false;
            break;
        }
    }
    if (caps)
    {
        if (islower(s[0]))
            s[0] = toupper(s[0]);
        else
            s[0] = tolower(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}