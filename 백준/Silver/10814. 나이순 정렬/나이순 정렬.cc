#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,string>&a, const pair<int, string>& b) {
    return a.first<b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<pair<int,string>>arr;
    for(int i=0; i<n; i++) {
        int x;
        string s;
        cin>>x>>s;
        arr.push_back({x,s});
    }
    stable_sort(arr.begin(),arr.end(),cmp);

    for(int i=0; i<n; i++) {
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
}