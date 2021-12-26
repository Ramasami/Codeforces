#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n], m = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        long long x = sqrt(a[i]);
        if (x * x == a[i])
            m = max(m, a[i]);
    }
    int q = sqrt(sqrt(m) + 1) + 1;
    int p[q + 1] = {0};
    vector<long> primes;
    for (int i = 2; i <= q; i++)
    {
        if (p[i] == 0)
        {

            for (size_t j = 2; i * j <= q; j++)
            {
                p[i * j] = 1;
            }
            primes.push_back(i);
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        long long s = sqrt(a[i]);
        if (s * s != a[i] || a[i] == 1)
        {
            cout << "NO\n";
            continue;
        }
        bool prime = true;
        for (int j = 0; primes[j] * primes[j] <= s && j < primes.size(); j++)
        {
            if (s % primes[j] == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}