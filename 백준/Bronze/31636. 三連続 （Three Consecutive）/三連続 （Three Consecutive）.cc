#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s;
    cin>>s;
    bool check=false;
    for(int i=0; i<n-2; i++) {
        if(s[i]=='o'&&s[i+1]=='o'&&s[i+2]=='o') {
            check=true;
            break;
        }
    }
    if(check) cout<<"Yes";
    else cout<<"No";
}