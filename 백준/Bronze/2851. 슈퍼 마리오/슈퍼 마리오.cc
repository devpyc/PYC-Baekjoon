#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>arr(10);
    vector<int>sum(11,0);

    for(int i=0; i<10; i++) {
        cin>>arr[i];
        sum[i+1]=sum[i]+arr[i];
    }
    int ans=0;
    int cur=INT_MAX;

    for(int i:sum) {
        int res=abs(100-i);
        if(res<cur || (res==cur && i>ans)) {
            cur=res;
            ans=i;
        }
    }
    cout<<ans<<"\n";
}