#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    cin.ignore();
    vector<string>ans;
    for (int i=0; i<t; i++) {
        string s;
        getline(cin,s);
        ans.push_back(s);
    }
    for (int i=0; i<t; i++) {
        cout<<i+1<<". "<<ans[i]<<"\n";
    }
}