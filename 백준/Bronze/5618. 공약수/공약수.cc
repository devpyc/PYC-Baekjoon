#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int res=arr[0];
    for(int i=1; i<n; i++) {
        res=gcd(res,arr[i]);
    }
    vector<int>ans;
    for(int i=1; i<=res; i++) {
        if(res%i==0) {
            ans.push_back(i);
        }
    }
    for(int i:ans) {
        cout<<i<<"\n";
    }
}