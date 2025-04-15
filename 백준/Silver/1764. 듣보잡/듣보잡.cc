#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<string>arr;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        arr.push_back(s);
    }
    sort(arr.begin(),arr.end());
    vector<string>ans;
    for(int i=0; i<m; i++) {
        string s;
        cin>>s;
        if(binary_search(arr.begin(),arr.end(),s)) ans.push_back(s);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(auto i:ans) {
        cout<<i<<"\n";
    }
}