#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    int ans=0;
    while (n--) {
        string s;
        cin>>s;
        ans+=(count(s.begin(),s.end(),'O')>m/2);
    }
    cout<<ans;
}