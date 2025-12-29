#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int m;
    cin>>m;
    while (m--) {
        int target;
        int left=0,right=n-1;
        cin>>target;
        bool check=false;
        while(left<=right){
            int mid=(left+right)/2;
        
            if (arr[mid]==target) {
                check=true;
            }
        
            if (arr[mid]<target) {
                left=mid+1;
            }
            else if (arr[mid]>=target) {
                right=mid-1;
            }
        }
        if (check) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}