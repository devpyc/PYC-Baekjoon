#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int v;
    cin>>v;

    int cnt=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==v) {
            cnt++;
        }
    }
    cout<<cnt;
}