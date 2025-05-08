#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int x=s[s.size()-1]-'0';
        (x%2==0)?cout<<"even\n":cout<<"odd\n";
    }
}