#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n = 5;
    while(n--) {
        int m=5;
        while(m--) {
            int t;
            cin>>t;
            if(t) {
                cout<<abs(n-2)+abs(m-2);
                return 0;
            }
        }
    }
}