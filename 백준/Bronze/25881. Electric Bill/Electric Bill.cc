#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,t;
    cin>>n>>m>>t;

    while(t--) {
        int x;
        cin>>x;
        int ans,y=x;
        if(x<1001) {
            ans=y*n;
        }else {
            ans=1000*n;
            y-=1000;
            ans+=y*m;
        }
        cout<<x<<" "<<ans<<"\n";
    }
}