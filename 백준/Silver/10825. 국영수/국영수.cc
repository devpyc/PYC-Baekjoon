// 구조체 안쓸래요
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,pair<int,pair<int,int>>>&a, pair<string,pair<int,pair<int,int>>>&b) {
    if (a.second.first!=b.second.first) return a.second.first>b.second.first;
    if (a.second.second.first!=b.second.second.first) return a.second.second.first<b.second.second.first;
    if (a.second.second.second!=b.second.second.second) return a.second.second.second>b.second.second.second;
    return a.first<b.first;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<pair<string,pair<int,pair<int,int>>>>arr;

    for (int i=0; i<n; i++) {
        string s;
        int a,b,c;
        cin>>s>>a>>b>>c;
        arr.push_back({s,{a,{b,c}}});
    }
    sort(arr.begin(),arr.end(),comp);
    for (int i=0; i<n; i++) {
        cout<<arr[i].first<<"\n";
    }
}