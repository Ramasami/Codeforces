#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n % m == 0)
    {
        cout << min((n / m) * b, n * a);
    }
    else
    {
        cout << min((n / m) * b + (n - (n / m) * m) * a, (n / m) * b + b);
    }
    return 0;
}