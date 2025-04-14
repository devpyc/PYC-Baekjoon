#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int,pair<int,pair<int,string>>>>arr;
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        string s;
        int a,b,c;
        cin>>s>>a>>b>>c;
        arr.push_back({c,{b,{a,s}}});
    }
    sort(arr.begin(),arr.end());

    cout<<arr[n-1].second.second.second<<"\n"<<arr[0].second.second.second;
}