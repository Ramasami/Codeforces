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
        unordered_set<int> s;
        vector<int> v;
        int x;
        for (size_t i = 0; i < 2 * n; i++)
        {
            cin >> x;
            if (s.find(x) == s.end())
            {
                s.insert(x);
                v.push_back(x);
            }
        }
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
            cout << *it << " ";
        cout << "\n";
    }
    return 0;
}