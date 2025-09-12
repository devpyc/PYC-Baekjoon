#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    string s;
    cin>>n>>s;

    for (int i=0; i<s.size(); i++) {
        if (s[i]=='I') s[i]='i';
        else s[i]='L';
    }
    cout<<s;
}