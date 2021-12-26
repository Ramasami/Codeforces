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
        if (n % 4 != 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 1; i <= n / 2; i++)
                cout << 2 * i << " ";
            for (int i = 1; i <= n / 2; i++)
                cout << 2 * i + (i > n / 4 ? 1 : -1) << " ";
        }
    }
    return 0;
}