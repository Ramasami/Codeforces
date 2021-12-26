#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], n;
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a, a + 3, greater<int>());
    int m = 0;
    for (int i = 0; a[0] * i <= n; i++)
    {
        for (int j = 0; a[0] * i + a[1] * j <= n; j++)
        {
            int d = a[0] * i + a[1] * j;

            int req = n - d;
            int k = req / a[2];
            if (k < 0)
                break;
            if (k * a[2] == req)
            {
                m = max(m, i + j + k);
                break;
            }
        }
    }
    cout << m;
    return 0;
}