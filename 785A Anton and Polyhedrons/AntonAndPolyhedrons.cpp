#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
    int faces = 0, n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        faces += m[s];
    }
    cout << faces;
    return 0;
}