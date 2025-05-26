#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long a=0,b=1;
    while(n>0) {
        if(n&1) {
            a+=b;
        }
        b*=3;
        n>>=1;
    }
    cout<<a;
}