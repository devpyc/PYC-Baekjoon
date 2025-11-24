#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    long long res=1;
    while (t--) {
        long long a,b;
        char c;
        cin>>a>>c>>b;
        long long ans;
        if (c=='+') ans=a+b-res;
        else if (c=='-') ans=(a-b)*res;
        else if (c=='*') ans=1LL*a*b,ans=ans*ans;
        else {
            if (a%2==0) ans=a/2;
            else ans=(a+1)/2;
        }
        res=ans;
        cout<<ans<<"\n";
    }
}