#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    n=1000-n;
    int ans=0;
    int arr[6]={500,100,50,10,5,1};
    for (int i=0; i<6; i++) {
        ans+=n/arr[i];
        n%=arr[i];
    }
    cout<<ans;
}