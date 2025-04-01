#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int e,n;
        cin>>e>>n;
        int cnt=0;
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            if(a>e) cnt++;
        }
        cout<<cnt<<"\n";
    }
}