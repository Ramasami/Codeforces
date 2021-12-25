#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
    int z = 0;
    while (n--)
    {
        int _x, _y, _z;
        cin >> _x >> _y >> _z;
        x += _x;
        y += _y;
        z += _z;
    }
    if (!(x || y || z))
        cout << "YES";
    else
        cout << "NO";
}