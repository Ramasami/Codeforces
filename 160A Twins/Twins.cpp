#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    int sum = 0;
    for (size_t i = 0; i < n; i++)
        sum += a[i];
    int s = 0;
    for (size_t i = 0; i < n; i++)
    {
        s += a[i];
        if (2 * s > sum)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << n;
}