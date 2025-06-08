#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    string s;
    cin>>n>>s;

    int cnt1=0,cnt2=0,cnt3=0;

    for(char c:s) {
        if(c=='J')cnt1++;
        else if(c=='O')cnt2++;
        else if(c=='I')cnt3++;
    }

    string ans="";
    ans+=string(cnt1,'J');
    ans+=string(cnt2,'O');
    ans+=string(cnt3,'I');

    cout<<ans;
}