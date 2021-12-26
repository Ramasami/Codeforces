#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    map<long long, long long> m;
    for (int i = 0; i < n; i++)
        m[a[i]]++;
    long long prev_score = 0;
    long long prev_prev_score = 0;
    long long prev_prev_prev_score = 0;

    long long prev_value = -10;
    for (map<long long, long long>::iterator it = m.begin(); it != m.end(); it++)
    {
        long long curr = it->first;
        long long count = it->second;
        long long t = prev_score;

        if (prev_value == curr - 1)
            prev_score = max(prev_prev_score, prev_prev_prev_score) + curr * count;
        else
            prev_score = max(prev_score, max(prev_prev_score, prev_prev_prev_score)) + curr * count;
        prev_prev_prev_score = prev_prev_score;
        prev_prev_score = t;
        prev_value = curr;
    }

    cout << max(prev_score, prev_prev_score);

    return 0;
}