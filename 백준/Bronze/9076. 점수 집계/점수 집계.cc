#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t;
    cin >> t;

    while (t--) {
        int arr[5];
        for (int i=0; i<5; i++) {
            cin>>arr[i];
        }

        sort(arr,arr+5);
        
        int m[3]={arr[1],arr[2],arr[3]};
        int res=m[2]-m[0];

        if (res>=4) {
            cout<<"KIN\n";
        } else {
            int sum=m[0]+m[1]+m[2];
            cout<<sum<<"\n";
        }
    }
}