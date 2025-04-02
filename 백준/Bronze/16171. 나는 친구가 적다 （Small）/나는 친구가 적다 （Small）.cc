#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,ss;
    cin>>s>>ss;
    string ans="";
    for(char c:s) {
        if(!isdigit(c)) ans+=c;
    }

    cout<<(ans.find(ss)!=string::npos)<<"\n";
}