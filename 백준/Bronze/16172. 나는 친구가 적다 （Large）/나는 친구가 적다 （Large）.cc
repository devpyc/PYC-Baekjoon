#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string a,b;
    cin>>a>>b;
    string ans="";
    for (char c:a) {
        if (!isdigit(c)) ans+=c;
    }
    cout<<(ans.find(b)!=string::npos);
}