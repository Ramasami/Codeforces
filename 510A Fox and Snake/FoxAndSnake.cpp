#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        switch (i % 4)
        {
        case 0:
        case 2:
            for (int j = 0; j < b; j++)
                cout << "#";
            cout << "\n";
            break;
        case 1:
            for (int j = 0; j < b - 1; j++)
                cout << ".";
            cout << "#\n";
            break;
        case 3:
            cout << "#";
            for (int j = 0; j < b - 1; j++)
                cout << ".";
            cout << "\n";
            break;

        default:
            break;
        }
    }
    return 0;
}