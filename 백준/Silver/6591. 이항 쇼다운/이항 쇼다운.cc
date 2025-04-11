#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    while(true) {
        cin>>n>>k;
        if(n==0&&k==0) {
            return 0;
        }
        if(k>n-k)k=n-k;
        long long ans=1;
        for(int i=1; i<k+1; i++) {
            ans*=(n-i+1);
            ans/=i;
        }
        cout<<ans<<"\n";
    }
}