#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s = s.substr(1, s.length()-2);
    set<char> countSet;
    for (int i = 0; i < s.length(); i+=3)
        countSet.insert(s[i]);
    cout<<countSet.size();
}