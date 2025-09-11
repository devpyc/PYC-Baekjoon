#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int arr[6];
    int a[6]={1,1,2,2,2,8};
    for (int i=0; i<6; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<6; i++) {
        cout<<a[i]-arr[i]<<" ";
    }
}