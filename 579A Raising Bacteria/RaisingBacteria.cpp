#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int i = 0;
    while (n)
    {
        i += n % 2;
        n >>= 1;
    }
    cout << i;
    return 0;
}