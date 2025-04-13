#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a;
    cin>>n>>a;
    priority_queue<int>pq;
    for (int i=1;i<n;i++) {
        int x;
        cin>>x;
        pq.push(x);
    }
    int cnt=0;
    if (pq.empty()) {
        cout<<0;
        return 0;
    }
    while (!pq.empty()&&pq.top()>=a) {
        int res=pq.top();
        pq.pop();
        a++;
        res--;
        cnt++;
        pq.push(res);
    }
    cout<<cnt;
}