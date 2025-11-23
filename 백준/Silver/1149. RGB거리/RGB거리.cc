#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    int r,g,b;
    cin>>r>>g>>b;
    for (int i=2; i<=n; i++) {
        int x,y,z;
        cin>>x>>y>>z;
        int nr=min(g,b)+x,ng=min(r,b)+y,nb=min(r,g)+z;
        r=nr,g=ng,b=nb;
    }
    cout<<min({r,g,b});
}