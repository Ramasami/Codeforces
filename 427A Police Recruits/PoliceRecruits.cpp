#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 0;
    int u = 0;
    while (n--)
    {
        int t;
        cin >> t;
        if (t == -1)
        {
            if (p > 0)
                p--;
            else
                u++;
        }
        else
            p += t;
    }
    cout << u;
    return 0;
}