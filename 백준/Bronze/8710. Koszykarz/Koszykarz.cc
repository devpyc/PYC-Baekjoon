#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    while(true) {
        a+=c;
        cnt++;
        if(a>=b) {
            break;
        }
    }
    cout<<cnt;
}