#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while(t--) {
        ll d,n,s,p;
        cin>>d>>n>>s>>p;

        ll st=n*s;
        ll pt=d+(n*p);
        
        if(st<pt) cout<<"do not parallelize\n";
        else if(st>pt) cout<<"parallelize\n";
        else cout<<"does not matter\n";
    }
}