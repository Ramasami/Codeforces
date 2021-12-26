#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> db;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (db[s] == 0)
        {
            db[s] = 1;
            cout << "OK\n";
        }
        else
        {
            cout << s << db[s] << "\n";
            db[s]++;
        }
    }
    return 0;
}