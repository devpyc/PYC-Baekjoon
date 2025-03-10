#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt=10;
    string s;
    cin>>s;

    for(int i=0; i<s.size()-1; i++) {
        if(s[i]==s[i+1]) {
            cnt+=5;
        }else {
            cnt+=10;
        }
    }

    cout<<cnt;
}