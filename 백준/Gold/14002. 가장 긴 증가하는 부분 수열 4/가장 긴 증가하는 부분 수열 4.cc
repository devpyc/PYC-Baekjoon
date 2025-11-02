#include <bits/stdc++.h>
using namespace std;

vector<int>ans;

// int lis(const vector<int>&arr) {
//     vector<int>lis;
//     for (int x:arr) {
//         auto it=std::lower_bound(lis.begin(),lis.end(),x);
//         if (it==lis.end()) lis.push_back(x);
//         else *it=x;
//     }
//     return static_cast<int>(lis.size());
// }

void lis(const vector<int>&arr) {
    vector<int>b,pre(arr.size(),-1),idx;
    for (int i=0; i<arr.size(); i++) {
        auto it=lower_bound(b.begin(),b.end(),arr[i]);
        int k=it-b.begin();

        if (it==b.end()) {
            b.push_back(arr[i]);
            idx.push_back(i);
        }else {
            *it=arr[i];
            idx[k]=i;
        }

        if (k>0) pre[i]=idx[k-1];
    }

    vector<int>ans;
    for (int i=idx.back(); i!=-1; i=pre[i]) {
        ans.push_back(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for (int i:ans) {
        cout<<i<<" ";
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    lis(arr);
}