#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;
    deque<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0; i<k; i++) {
        sum+=arr[i];
    }
    int MAX=sum;
    for (int i=k; i<n+k-1; i++) {
        sum+=arr[i%n]-arr[(i-k)%n];
        if (sum>MAX) {
            MAX=sum;
        }
    }
    cout<<MAX;
}