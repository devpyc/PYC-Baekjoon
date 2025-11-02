#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b) {
    if (a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);

    for (int i=0; i<n; i++) {
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(),arr.end(),comp);
    int r=0,cnt=0;

    for (auto &i:arr) {
        if (i.first>=r) {
            cnt++;
            r=i.second;
        }
    }
    cout<<cnt;
}