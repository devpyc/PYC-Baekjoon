#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<pair<long long,int>>arr;
    arr.reserve(n);

    for (int i=0; i<n; i++) {
        long long g,x;
        cin>>g>>x;
        arr.emplace_back(x,g?1:-1);
    }

    sort(arr.begin(),arr.end(),[](const auto& a, const auto& b){ return a.first < b.first; });

    const int idx=n;
    vector<int>start(2*n+3,-1);
    start[idx]=0;

    long long ans=0;
    int sum=0;

    for (int i=1; i<=n; i++) {
        sum+=arr[i-1].second;
        int cur=sum+idx;
        
        if (start[cur]==-1) start[cur]=i;
        else {
            int j=start[cur];
            long long res=arr[i-1].first-arr[j].first;
            if (res>ans) ans=res;
        }
    }
    cout<<ans;
}