#include <bits/stdc++.h>
using namespace std;

int binarySearch(int l, int r, int x[], int m)
{
    if (l > r)
        return l;
    int mid = l + (r - l) / 2;
    if (x[mid] < m)
        return binarySearch(mid + 1, r, x, m);
    if (x[mid] > m)
        return binarySearch(l, mid - 1, x, m);
    int t = binarySearch(mid + 1, r, x, m);
    if (t == -1)
        return mid;
    else
        return t;
}

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    int q;
    cin >> q;
    sort(x, x + n);
    while (q--)
    {
        int m;
        cin >> m;
        cout << binarySearch(0, n - 1, x, m) << "\n";
    }
    return 0;
}
