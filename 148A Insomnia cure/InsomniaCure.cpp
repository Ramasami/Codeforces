#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4], d;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> d;
    int list[d + 1] = {0};
    sort(a, a + 4);
    for (int i = 0; i < 4; i++)
    {
        bool skip = false;
        for (int j = 0; j < i && !skip; j++)
            if (a[i] % a[j] == 0)
                skip = true;
        if (skip)
            continue;

        int j = 0;
        while (j * a[i] <= d)
            list[j++ * a[i]] = 1;
    }
    int sum = 0;
    for (int i = 1; i <= d; i++)
        sum += list[i];
    cout << sum;
    return 0;
}