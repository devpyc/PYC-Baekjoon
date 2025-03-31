#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,l,r;
    cin>>x>>l>>r;

    if(x<=l) {
        cout<<l;
        return 0;
    } if(x>=r || r==l) {
        cout<<r;
        return 0;
    } else {
        cout<<x;
        return 0;
    }
}