#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool found=0;
    int n,a,b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a!=b)
        {
            found=1;
            break;
        }
    }
    if(found)
        puts("Happy Alex");
    else
        puts("Poor Alex");
    return 0;
}