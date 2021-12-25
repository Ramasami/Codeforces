#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev = INT_MAX;
    int curr = 0;
    int maxCurr = 1;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (prev <= x)
        {
            curr++;
            maxCurr = max(maxCurr, curr);
        }
        else
        {
            maxCurr = max(maxCurr, curr);
            curr = 1;
        }
        prev = x;
    }
    cout << maxCurr;

    return 0;
}