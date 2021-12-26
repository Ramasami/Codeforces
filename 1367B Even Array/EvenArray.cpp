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
        int e = 0, o = 0;
        for (size_t i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            if (t % 2 != i % 2)
            {
                if (i % 2)
                    e++;
                else
                    o++;
            }
        }
        if (e == o)
            cout << e << "\n";
        else
            cout << -1 << "\n";
    }
}