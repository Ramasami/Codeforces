#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int a = 0;
    int d = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    cout << (a > d ? "Anton" : (d > a ? "Danik" : "Friendship"));
}