#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int w = 0, l = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a >= b)
            w++;
        if (b >= a)
            l++;
    }
    if (w > l)
        cout << "Mishka";
    else if (w < l)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}