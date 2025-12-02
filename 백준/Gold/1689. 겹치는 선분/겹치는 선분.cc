#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a,pair<int,int>&b) {
    if (a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for (int i=0; i<n; i++) {
        long long a,b;
        cin>>a>>b;
        arr.emplace_back(a,+1);
        arr.emplace_back(b,-1);
    }
    sort(arr.begin(),arr.end(),comp);

    int ans=0,cnt=0;
    for (auto &i:arr) {
        cnt+=i.second;
        ans=max(ans,cnt);
    }
    cout<<ans;
}