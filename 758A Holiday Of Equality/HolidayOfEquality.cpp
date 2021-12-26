#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    int m = 0;
    int n, t;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> t;
        sum += t;
        m = max(m, t);
    }
    cout << m * n - sum;
    return 0;
}