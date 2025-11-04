#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;

    int n,l;
    cin>>n>>l;
    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    for (int i=0; i<n; i++) {
        pq.push({arr[i],i});
        while (pq.top().second<=i-l) {
            pq.pop();
        }
        cout<<pq.top().first<<" ";
    }
}