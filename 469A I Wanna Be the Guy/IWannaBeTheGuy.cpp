#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n] = {0};
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        a[x - 1] = 1;
    }
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        a[x - 1] = 1;
    }
    bool win = true;
    for (int i = 0; i < n && win; i++)
    {
        win &= (a[i] == 1);
    }
    cout << (win ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}