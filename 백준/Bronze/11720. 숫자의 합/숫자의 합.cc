#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<n; i++) {
        ans+=s[i]-'0';
    }
    cout<<ans;
}