#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<bool>check(m+1,true);
    check[0]=check[1]=false;

    for(int i=2; i*i<=m; i++) {
        if(check[i]) {
            for(int j=i*i; j<=m; j+=i) {
                check[j]=false;
            }
        }
    }
    for(int i=n; i<=m; i++) {
        if(check[i]) cout<<i<<"\n";
    }
}