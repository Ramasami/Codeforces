#include <bits/stdc++.h>
using namespace std;

string getMax(int n, int m)
{
    if (n * 9 < m)
        return "-1";
    string s = "";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == m)
            s += '0';
        else
        {
            int t = min(9, m - sum);
            s += t + '0';
            sum += t;
        }
    }
    return s;
}

string getMin(int n, int m)
{
    if (n * 9 < m)
        return "-1";
    string s = "";
    int sum = 1;
    for (int i = n - 1; i > 0; i--)
    {
        if (sum == m)
            s = '0' + s;
        else
        {
            int t = min(9, m - sum);
            s = to_string(t) + s;
            sum += t;
        }
    }

    s = '1' + s;
    if (m - sum > 8)
    {
        return "-1";
    }
    else
    {
        s[0] = '1' + m - sum;
    }
    return s;
}

int main()
{
    int n, m;
    cin >> n >> m;
    if (n == 0 || (m == 0 && n != 1))
    {
        cout << "-1 -1";
    }
    else
    {
        cout << getMin(n, m) << " " << getMax(n, m);
    }
    return 0;
}