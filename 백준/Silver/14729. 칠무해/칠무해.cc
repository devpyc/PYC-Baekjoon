#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout.precision(3);
    cout<<fixed;
    for(int i=0; i<7; i++) {
        cout<<arr[i]<<"\n";
    }
}