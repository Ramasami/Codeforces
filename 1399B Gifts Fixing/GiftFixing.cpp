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
        long long a[n];
        long long m = LONG_LONG_MAX;
        long long b[n];
        long long M = LONG_LONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = min(m, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            M = min(M, b[i]);
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i] - m;
            int y = b[i] - M;
            sum += max(x, y);
        }
        cout << sum << "\n";
    }
    return 0;
}