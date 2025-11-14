#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        if (i<k) {
            sum+=arr[i];
        }
    }
    int MAX=sum;
    int cnt=1;
    for (int i=k; i<n; i++) {
        sum+=arr[i]-arr[i-k];
        if (sum>MAX) {
            MAX=sum;
            cnt=1;
        }else if (sum==MAX){
            cnt++;
        }
    }
    if (MAX!=0) {
        cout<<MAX<<"\n"<<cnt;
    }else {
        cout<<"SAD";
    }
}