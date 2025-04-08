#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int>arr1;
vector<int>arr2;

void backtrack(int start, int depth) {
    if(depth==m) {
        for(int i=0; i<m; i++) {
            cout<<arr2[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=start; i<n; i++) {
        arr2[depth]=arr1[i];
        backtrack(i+1,depth+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    arr1.resize(n);
    arr2.resize(m);

    for(int i=0; i<n; i++) {
        cin>>arr1[i];
    }
    sort(arr1.begin(),arr1.end());
    backtrack(0,0);
}