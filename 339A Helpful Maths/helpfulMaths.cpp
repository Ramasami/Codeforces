#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count[3] = {0};
    for(int i=0;i<s.length();i+=2) {
        switch(s.at(i)) {
            case '1': count[0]++;break;
            case '2': count[1]++;break;
            case '3': count[2]++;break;
        }
    }

    bool begin = false;
    for (int i = 0; i < 3; i++)
    {
        int j = count[i];
        while(j-->0) {
            if(begin)
                cout<<"+";
            cout<<i+1;
            begin = true;
        }
    }
}