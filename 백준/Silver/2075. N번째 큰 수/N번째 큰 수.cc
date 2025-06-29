#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    int nn=n*n;
    int arr[nn];
    for (int i=0; i<nn; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+nn,greater<int>());
    cout<<arr[n-1];
}