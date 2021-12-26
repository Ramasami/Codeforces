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
        int d[4];
        int c = 0;
        for (int i = 0, j = 1000; i < 4; i++)
        {
            d[i] = n / j;
            n %= j;
            j /= 10;
            c += d[i] > 0 ? 1 : 0;
        }
        cout << c << "\n";
        for (int i = 0, j = 1000; i < 4; i++)
        {
            if (d[i] != 0)
                cout << d[i] * j << " ";
            j /= 10;
        }
        cout << "\n";
    }
    return 0;
}