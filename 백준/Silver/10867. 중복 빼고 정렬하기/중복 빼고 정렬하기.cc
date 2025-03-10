#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr[n];
    set<int>ans;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++) {
        ans.insert(arr[i]);
    }
    for(auto it = ans.begin(); it!=ans.end(); ++it) {
        cout<<*it<<" ";
    }
}