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
        int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool possible = true;
        for (size_t i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                possible = false;
                break;
            }
        }
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}