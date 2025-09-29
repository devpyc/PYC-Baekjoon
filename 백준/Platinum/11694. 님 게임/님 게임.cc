#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    bool check=false;
    long long sum=0;
    
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        
        if (x!=1) check=true;
        sum^=x;
    }

    if (check) {
        if (sum) cout<<"koosaga";
        else cout<<"cubelover";
    }else {
        if (!sum) cout<<"koosaga";
        else cout<<"cubelover";
    }
}