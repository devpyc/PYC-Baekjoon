#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for (int i=0; i<m; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for (int i:arr) cout<<i<<" ";
}