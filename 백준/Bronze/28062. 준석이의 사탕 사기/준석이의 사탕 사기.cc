#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int arr[n];
    int ans=0;
    vector<int>min;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        ans+=arr[i];
        if(arr[i]%2==1) {
            min.push_back(arr[i]);
        }
    }

    sort(min.begin(),min.end());

    if(ans%2==0) {
        cout<<ans;
    }else {
        cout<<ans-min[0];
    }
}