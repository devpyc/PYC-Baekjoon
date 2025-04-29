#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>arr(10001,0);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr[x]++;
    }
    sort(arr.begin(),arr.end(),greater<int>());
    cout<<arr[0];
}