#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=(a+b+c+d)-min({a,b,c,d})+1;;
    cout<<ans;
}