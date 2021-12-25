#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1 && c == 1)
        cout << a + b + c;
    else if (b == 1)
        cout << max((a + b) * c, (c + b) * a);
    else if (a == 1)
        cout << (a + b) * c;
    else if (c == 1)
        cout << (c + b) * a;

    else
        cout << a * b * c;
    return 0;
}