#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    string s;
    cin>>n>>s;
    int ans=0;
    int a=0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]=='O') {
            ans+=(i+1)+a;
            a++;
        }else {
            a=0;
        }
    }
    cout<<ans;
}