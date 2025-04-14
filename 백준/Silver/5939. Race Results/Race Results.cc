#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>>arr;
    for(int i=0; i<n; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        arr.push_back({a,{b,c}});
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++) {
        cout<<arr[i].first<<" "<<arr[i].second.first<<" "<<arr[i].second.second<<"\n";
    }
}