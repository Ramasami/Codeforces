#include <bits/stdc++.h>
using namespace std;

typedef class Dragon
{
public:
    int x;
    int y;

    bool operator<(const Dragon &d)
    {
        return this->x < d.x;
    }
} Dragon;

int main()
{
    int s, n;
    cin >> s >> n;
    Dragon dragons[n];
    for (int i = 0; i < n; i++)
    {
        Dragon dragon;
        cin >> dragon.x >> dragon.y;
        dragons[i] = dragon;
    }
    sort(dragons, dragons + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= dragons[i].x)
        {
            cout << "NO";
            return 0;
        }
        s += dragons[i].y;
    }
    cout << "YES";

    return 0;
}