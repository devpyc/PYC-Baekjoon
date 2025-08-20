#include <bits/stdc++.h>
using namespace std;

const int MOD=1000000;
const int p=15*(MOD/10);

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin>>n;
    int arr[p];
    arr[0]=0,arr[1]=1;
    for (int i=2; i<p; i++) {
        arr[i]=(arr[i-1]+arr[i-2])%MOD;
    }
    cout<<arr[n%p];
}