#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n >= 0)
        cout << n;
    else
        cout << max((n / 10), (n / 100) * 10 - (n * -1) % 10);
    return 0;
}