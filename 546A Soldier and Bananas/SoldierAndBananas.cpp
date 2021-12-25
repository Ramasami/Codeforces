#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    long ans = (w*(w+1l))*k/2-n;
    cout<<((ans<0)?0:ans);
}