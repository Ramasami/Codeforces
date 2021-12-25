#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a + 4);
    int x = 1;
    for (int i = 1, j = 0; i < 4; i++)
    {
        if (a[i] != a[j])
        {
            x++;
            j = i;
        }
    }
    cout << 4 - x;

    return 0;
}