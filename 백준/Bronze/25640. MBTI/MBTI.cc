#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int n;
    cin>>n;

    int cnt=0;

    for(int i=0; i<n; i++) {
        string s2;
        cin>>s2;
        if(s2==s) {
            cnt++;
        }
    }
    cout<<cnt;
}