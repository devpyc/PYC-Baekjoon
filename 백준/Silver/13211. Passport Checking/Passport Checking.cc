#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<string>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int m;
    cin>>m;
    int cnt=0;
    for(int i=0; i<m; i++) {
        string s;
        cin>>s;
        if(binary_search(arr.begin(),arr.end(),s)) cnt++;
    }
    cout<<cnt;
}