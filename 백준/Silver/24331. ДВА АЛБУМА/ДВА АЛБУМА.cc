#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int cnt=0;
    vector<int>ans;
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        if(binary_search(arr.begin(),arr.end(),x)) {
            cnt++;
            ans.push_back(x);
        }
    }
    if(cnt==0) {
        cout<<cnt;
        return 0;
    }
    sort(ans.begin(),ans.end());
    cout<<cnt<<"\n";
    for(int res:ans) cout<<res<<" ";
}