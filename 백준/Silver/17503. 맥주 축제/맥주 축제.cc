#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a,pair<int,int>&b) {
    return a.second<b.second;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int>>arr(k);
    for (int i=0; i<k; i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end(),comp);

    priority_queue<int,vector<int>,greater<int>>pq;
    long long sum=0;
    int ans=-1;
    for (auto &i:arr) {
        pq.push(i.first);
        sum+=i.first;

        if (pq.size()>n) {
            sum-=pq.top();
            pq.pop();
        }
        if (pq.size()==n&&sum>=m) {
            ans=i.second;
            break;
        }
    }
    cout<<ans;
}