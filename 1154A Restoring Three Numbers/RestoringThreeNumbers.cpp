#include <bits/stdc++.h>
using namespace std;

void findAnswer(int a, int b, int c, int d)
{
    cout << d - a << " " << d - b << " " << d - c;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b + c == 2 * d)
        findAnswer(a, b, c, d);
    else if (a + b + d == 2 * c)
        findAnswer(a, b, d, c);
    else if (b + c + d == 2 * a)
        findAnswer(b, c, d, a);
    else if (a + c + d == 2 * b)
        findAnswer(a, c, d, b);
    return 0;
}
