#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int ans=0;

    for(int i=0; i<n; i++) {
        int h,w;
        cin>>h>>w;

        if(h*w>=ans) {
            ans=h*w;
        }
    }

    cout<<ans;
}