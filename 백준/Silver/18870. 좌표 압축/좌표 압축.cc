#include <bits/stdc++.h>
#define MOD 10007
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

    vector<int> arrs = arr;
    sort(arrs.begin(), arrs.end());
    arrs.erase(unique(arrs.begin(), arrs.end()), arrs.end());

    map<int,int>cmp;

    for(int i=0; i<arrs.size(); i++) {
        cmp[arrs[i]]=i;
    }
    for(int i=0; i<n; i++) {
        cout<<cmp[arr[i]]<<" ";
    }
}