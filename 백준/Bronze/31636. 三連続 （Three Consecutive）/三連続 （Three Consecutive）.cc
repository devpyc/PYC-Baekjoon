#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.length()-2; i++) {
        if(s[i]=='o'&&s[i+1]=='o'&&s[i+2]=='o') {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}