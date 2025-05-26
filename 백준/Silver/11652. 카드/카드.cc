#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<long long,int>arr;
    for(int i=0; i<n; i++) {
        long long x;
        cin>>x;
        arr[x]++;
    }

    long long ans=arr.begin()->first;
    int cnt=arr.begin()->second;

    for(auto& i:arr) {
        if(i.second>cnt) {
            cnt=i.second;
            ans=i.first;
        }
    }
    cout<<ans;
}