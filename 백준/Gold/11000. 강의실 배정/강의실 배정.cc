#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<pair<ll,ll>>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(),arr.end());

    priority_queue<ll,vector<ll>,greater<ll>>pq;
    pq.push(arr[0].second);

    for (int i=1; i<n; i++) {
        if (pq.top()<=arr[i].first) {
            pq.pop();
        }
        pq.push(arr[i].second);
    }
    cout<<pq.size();
}