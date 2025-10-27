#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    int arr[n];
    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    sort(arr,arr+n);
    int left=0,right=n-1,cnt=0;
    while (left<right) {
        int sum=arr[left]+arr[right];
        if (sum==x) {
            cnt++;
            right--;
        }else if (sum>x) {
            right--;
        }else {
            left++;
        }
    }
    cout<<cnt;
}