#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int cnt=0,l=0,r=0,res=arr[0];
    while(r<n) {
        if(res==m) {
            cnt++;
            res+=arr[++r];
        }else if(res<m) res+=arr[++r];
        else res-=arr[l++];
    }
    cout<<cnt;
}