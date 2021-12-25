#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.at(i) == s2.at(i))
            continue;
        else if (s1.at(i) > s2.at(i))
            cout << 1;
        else
            cout << -1;
        return 0;
    }
    cout<<0;
}