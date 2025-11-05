#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end());

    int ans=0;
    int l=INT_MIN,r=INT_MIN;
    for (int i=0; i<n; i++) {
        if (r<arr[i].first) {
            ans+=r-l;
            l=arr[i].first;
        }
        if (r<arr[i].second) {
            r=arr[i].second;
        }
    }
    ans+=r-l;
    cout<<ans;
}