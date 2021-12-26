#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t <= 5 - k)
            count++;
    }
    cout << count / 3;
    return 0;
}