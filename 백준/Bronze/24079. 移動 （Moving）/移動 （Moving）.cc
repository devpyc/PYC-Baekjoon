#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int x,y,z;
    cin>>x>>y>>z;

    if(2*(x+y)<=2*z+1) cout<<1;
    else cout<<0;
}