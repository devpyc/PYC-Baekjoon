#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    long long m;

    cin>>n>>m;
    vector<int>arr(n);

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long sum=0;
    int ans=INT_MAX,l=0;

    for (int i=0; i<n; i++) {
        sum+=arr[i];
        while (sum>=m) {
            ans=min(ans,i-l+1);
            sum-=arr[l++];
        }
    }
    cout<<(ans==INT_MAX?0:ans)<<"\n";
}