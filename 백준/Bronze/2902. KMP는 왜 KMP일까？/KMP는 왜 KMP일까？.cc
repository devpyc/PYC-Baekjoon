#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    string ans;
    ans+=s[0];
    for (int i=0; i<s.size(); i++) {
        if (s[i]=='-') ans+=s[i+1];
    }
    cout<<ans;
}