#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,int> m;
    for (size_t i = 0; i < s1.length(); i++)
    {
        m[s1[i]]++;
    }
    for (size_t i = 0; i < s2.length(); i++)
    {
        m[s2[i]]++;
    }
    for (size_t i = 0; i < s3.length(); i++)
    {
        m[s3[i]]--;
    }
    for(map<char,int>::iterator it = m.begin();it!=m.end();it++){
        if(it->second!=0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}