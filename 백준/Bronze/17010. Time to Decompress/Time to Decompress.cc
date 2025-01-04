#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;


    while(t--) {
        int n;
        char c;
        cin>>n>>c;

        for(int i=0; i<n; i++) {
            cout<<c;
        }
        cout<<"\n";
    }
}