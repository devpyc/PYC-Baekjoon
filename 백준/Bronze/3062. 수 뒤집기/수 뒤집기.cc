#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;
        int ans=x;
        string s=to_string(x);
        reverse(s.begin(),s.end());
        ans+=stoi(s);
        string a=to_string(ans);
        string b=a;
        reverse(a.begin(),a.end());
        (a==b)?cout<<"YES\n":cout<<"NO\n";
    }
}