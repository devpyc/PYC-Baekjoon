#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int ans=0;

    for(int i=0; i<31; i++) {
        if(n==(1<<i)) {
            ans=1;
            break;
        }
    }
    cout<<ans;
}