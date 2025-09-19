#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a, pair<int,int>&b) {
    if (a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    for (int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end(),comp);

    for (int i=0; i<n; i++) {
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
}