#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin>>n;

    long long arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    long long a,b,c;
    long long MIN=3e9+1;

    for (int i=0; i<n; i++) {
        long long l=i+1,r=n-1;

        while (l<r) {
            long long sum=arr[i]+arr[l]+arr[r];

            if (abs(sum)<MIN) {
                MIN=abs(sum);
                a=i,b=l,c=r;
            }

            if (sum>0) r--;
            else l++;
        }
    }
    cout<<arr[a]<<" "<<arr[b]<<" "<<arr[c];
}