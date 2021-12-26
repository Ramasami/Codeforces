#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long i = 3;
        long long j = 2;
        while (true)
        {
            if (n % i == 0)
            {
                cout << n / i << "\n";
                break;
            }
            else
            {
                j <<= 1;
                i += j;
            }
        }
    }
    return 0;
}