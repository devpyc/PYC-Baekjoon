#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n; i++) {
        if(s[i]=='I')s[i]='i';
        else s[i]='L';
    }
    cout<<s;
}