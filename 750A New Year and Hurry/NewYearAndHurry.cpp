#include <bits/stdc++.h>
using namespace std;

int main()
{
    int timeLeft = 4 * 60;
    int n, k;
    cin >> n >> k;
    timeLeft -= k;
    int unitTimeLeft = timeLeft / 5;

    double D = sqrt(1 + 8.0 * unitTimeLeft);
    int questions = (D - 1) / 2;
    cout << min(questions, n);
    return 0;
}