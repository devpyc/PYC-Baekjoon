#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int arr[10];
        for (int i=0; i<10; i++) {
            cin>>arr[i];
        }
        sort(arr,arr+10,greater<int>());
        cout<<arr[2]<<"\n";
    }
}