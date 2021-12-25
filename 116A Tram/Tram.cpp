#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = 0, current = 0;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        current += b - a;
        max = max < current ? current : max;
    }
    cout << max;
}