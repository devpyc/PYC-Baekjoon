#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int arr[28];
    for (int i=0; i<28; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+28);
    for (int i=1; i<31; i++) {
        if (find(arr,arr+28,i)==arr+28) {
            cout<<i<<"\n";
        }
    }
}