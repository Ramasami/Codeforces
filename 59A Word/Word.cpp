#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int l = 0;
    int n = s.length();
    for (int i = 0; i < n && l<=(n-1)/2; i++)
    {
        if(s[i] >='a' && s[i]<='z') {
            l++;
        }
    }
    if(2*l>=n)
        transform(s.begin(),s.end(),s.begin(),::tolower);
    else
        transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
}