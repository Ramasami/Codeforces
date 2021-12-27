#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool chars[26] = {false};
        bool sus = false;
        for (int i = 0; i < n; i++)
        {
            if (chars[s[i] - 'A'] && s[i - 1] != s[i])
            {
                sus = true;
                break;
            }
            else
            {
                chars[s[i] - 'A'] = true;
            }
        }
        cout << (sus ? "NO" : "YES") << "\n";
    }
    return 0;
}