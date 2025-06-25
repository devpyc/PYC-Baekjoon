#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    double ans;
    if (s[0]=='A') {
        ans=4;
        if (s[1]=='+') ans+=0.3;
        else if (s[1]=='-') ans-=0.3;
    }
    else if (s[0]=='B') {
        ans=3;
        if (s[1]=='+') ans+=0.3;
        else if (s[1]=='-') ans-=0.3;
    }
    else if (s[0]=='C') {
        ans=2;
        if (s[1]=='+') ans+=0.3;
        else if (s[1]=='-') ans-=0.3;
    }
    else if (s[0]=='D') {
        ans=1;
        if (s[1]=='+') ans+=0.3;
        else if (s[1]=='-') ans-=0.3;
    }
    else ans=0;

    cout<<fixed;
    cout.precision(1);
    cout<<ans;
}