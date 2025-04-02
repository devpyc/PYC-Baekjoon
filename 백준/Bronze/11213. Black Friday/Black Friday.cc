#include <bits/stdc++.h>
#define ll long long
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
    map<int,int>cnt;
    for(int i=0; i<n; i++) {
        cnt[arr[i]]++;
    }
    int res=0,ans=-1;
    for(int i=0; i<n; i++) {
        if(cnt[arr[i]]==1&&arr[i]>res) {
            res=arr[i];
            ans=i+1;
        }
    }
    if(ans==-1) {
        cout<<"none"<<"\n";
    }else {
        cout<<ans<<"\n";
    }
}