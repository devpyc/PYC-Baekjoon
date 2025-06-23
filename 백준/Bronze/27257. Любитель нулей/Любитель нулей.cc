#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    int ans=stoi(s);
    s=to_string(ans);
    reverse(s.begin(),s.end());
    ans=stoi(s);
    s=to_string(ans);
    reverse(s.begin(),s.end());
    cout<<count(s.begin(),s.end(),'0');
}