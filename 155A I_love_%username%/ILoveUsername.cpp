#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    cin >> a;
    int max = a, min = a, awesome = 0;
    while (n-- > 0)
    {
        cin >> a;
        if (a > max)
        {
            awesome++;
            max = a;
        }
        else if (a < min)
        {
            awesome++;
            min = a;
        }
    }
    cout << awesome;
    return 0;
}