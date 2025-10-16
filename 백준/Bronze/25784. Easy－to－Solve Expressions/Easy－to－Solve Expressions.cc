#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b,c;
    cin>>a>>b>>c;

    if (a==b+c||b==a+c||c==a+b) cout<<1;
    else if (a==b*c||b==a*c||c==a*b) cout<<2;
    else cout<<3;
}