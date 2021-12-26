#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a = 0, b = 0, c = 0, t;
    vector<int> s[3];
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s[t - 1].push_back(i + 1);
    }
    int m = min(s[0].size(), min(s[1].size(), s[2].size()));
    cout << m << "\n";
    for (int i = 0; i < m; i++)
    {
        cout << s[0][i] << " " << s[1][i] << " " << s[2][i] << "\n";
    }
    return 0;
}