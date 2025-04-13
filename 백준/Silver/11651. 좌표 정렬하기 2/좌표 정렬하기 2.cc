#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<pair<int,int>>arr;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        arr.push_back({y,x});
    }
    sort(arr.begin(),arr.end());

    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i].second<<" "<<arr[i].first<<"\n";
    }
}