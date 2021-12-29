#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        d.push_back(t);
    }

    int sc1 = 0, sc2 = 0;
    int i = 0;

    while (d.size() > 0)
    {
        int l = 0;
        if (d.back() > d.front())
        {
            l = d.back();
            d.pop_back();
        }
        else
        {
            l = d.front();
            d.pop_front();
        }
        if (i++ % 2 == 0)
            sc1 += l;
        else
            sc2 += l;
    }
    cout << sc1 << " " << sc2;
}