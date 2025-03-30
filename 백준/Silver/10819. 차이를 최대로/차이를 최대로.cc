#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int ans=0,sum=0;
    for(int i=0; i<n-1; i++) {
        sum+=abs(arr[i]-arr[i+1]);
    }
    ans=max(ans,sum);

    while(next_permutation(arr.begin(),arr.end())) {
        sum=0;
        for(int i=0; i<n-1; i++) {
            sum+=abs(arr[i]-arr[i+1]);
        }
        ans=(max(ans,sum));
    }
    cout<<ans;
}