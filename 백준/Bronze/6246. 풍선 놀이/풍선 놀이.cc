#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;

    vector<bool>check(n,false);

    while(q--) {
        int L,I;
        cin>>L>>I;
        for(int i=L-1; i<n; i+=I) {
            check[i]=true;
        }
    }

    int cnt=0;

    for(int i=0; i<n; i++) {
        if(!check[i]) {
            cnt++;
        }
    }
    cout<<cnt;
}