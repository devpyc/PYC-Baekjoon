#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char start='A';
    string s;
    cin>>s;

    int cnt1=0,cnt2=0,ans=0;
    for(int i=0; i<s.size(); i++) {
        cnt1=abs(s[i]-start);
        cnt2=26-cnt1;
        ans+=min(cnt1,cnt2);
        start=s[i];
    }
    cout<<ans;
}