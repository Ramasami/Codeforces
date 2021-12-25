#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        switch (s.at(i))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                continue;
                break;
            default:
            {
                if (s.at(i) >= 'a' && s.at(i) <= 'z')
                    ans+=".";
                ans+=s.at(i);
            }
        }
    }
    cout<<ans;
}