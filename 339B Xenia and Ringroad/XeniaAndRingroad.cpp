#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m;
    int curr = 0;
    long long int sum = 0;
    for (size_t i = 0; i < m; i++)
    {

        cin >> a;
        a--;
        if (a < curr)
            sum += n - curr + a;
        else
            sum += a - curr;
        curr = a;
    }
    cout << sum;
    return 0;
}