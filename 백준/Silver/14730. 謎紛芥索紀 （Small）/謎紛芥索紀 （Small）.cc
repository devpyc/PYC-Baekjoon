#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int ans=0;
    while(n--) {
        int c,k;
        cin>>c>>k;
        ans+=c*k;
    }
    cout<<ans;
}