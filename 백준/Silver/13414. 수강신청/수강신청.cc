#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    unordered_map<string,int>arr;
    vector<pair<int,string>>ans;

    for(int i=0; i<m; i++) {
        string x;
        cin>>x;
        arr[x]=i;
    }

    for(auto& i:arr) {
        ans.push_back({i.second,i.first});
    }

    sort(ans.begin(),ans.end());
    int cnt=min(n,(int)ans.size());

    for(int i=0; i<cnt; i++) {
        cout<<ans[i].second<<"\n";
    }
}