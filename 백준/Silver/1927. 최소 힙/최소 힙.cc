#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>>pq;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x==0) {
            if(pq.empty()) cout<<0<<"\n";
            else {
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }else {
            pq.push(x);
        }
    }
}