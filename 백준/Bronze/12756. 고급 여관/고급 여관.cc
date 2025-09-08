#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int aa=(b+c-1)/c,bb=(d+a-1)/a;
    
    if (aa<bb) cout<<"PLAYER B";
    else if (aa>bb) cout<<"PLAYER A";
    else cout<<"DRAW";
}