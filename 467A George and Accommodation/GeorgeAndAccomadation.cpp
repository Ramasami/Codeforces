#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        ans += p + 2 > q ? 0 : 1;
    }
    cout << ans;
}