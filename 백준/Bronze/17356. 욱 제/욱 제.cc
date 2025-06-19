#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long double a,b;
    cin>>a>>b;

    long double m=(b-a)/400;

    cout<<fixed;
    cout.precision(15);
    cout<<1/(1+pow(10,m));
}