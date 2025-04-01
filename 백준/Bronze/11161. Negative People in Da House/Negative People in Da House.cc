#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int cur=0,cnt=0;
        for(int i=0; i<n; i++) {
            int e,l;
            cin>>e>>l;

            cur+=e;
            cur-=l;
            if(cur<0) {
                cnt+=-cur;
                cur=0;
            }
        }
        cout<<cnt<<"\n";
    }
}