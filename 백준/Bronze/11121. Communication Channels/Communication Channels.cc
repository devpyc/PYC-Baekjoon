#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        string a,b;
        cin>>a>>b;
        bool check=true;
        for(int i=0; i<a.size(); i++) {
            if(a[i]!=b[i]) {
                check=false;
                break;
            }
        }
        if(check) {
            cout<<"OK\n";
        }else {
            cout<<"ERROR\n";
        }
    }
}