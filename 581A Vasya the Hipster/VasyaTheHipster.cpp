#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << abs(b - a) / 2;
    return 0;
}