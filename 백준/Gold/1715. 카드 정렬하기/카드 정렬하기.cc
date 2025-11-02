#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b) {
    if (a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    priority_queue<long long,vector<long long>,greater<long long>>pq;
    for (int i=0; i<n; i++) {
        long long x;
        cin>>x;
        pq.push(x);
    }

    long long ans=0;
    while (pq.size()>1) {
        long long a=pq.top();
        pq.pop();
        long long b=pq.top();
        pq.pop();
        long long sum=a+b;
        ans+=sum;
        pq.push(sum);
    }
    cout<<ans;
}