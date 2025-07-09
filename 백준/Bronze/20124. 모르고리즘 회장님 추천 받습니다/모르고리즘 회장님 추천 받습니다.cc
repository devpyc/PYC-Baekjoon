#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,string>a,pair<int,string>b) {
    if (a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    vector<pair<int,string>>arr;
    while (t--) {
        string s;
        int x;
        cin>>s>>x;
        arr.push_back({x,s});
    }
    sort(arr.begin(),arr.end(),comp);
    cout<<arr[0].second;
}