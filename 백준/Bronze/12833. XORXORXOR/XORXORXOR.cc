#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,c;
    cin>>a>>b>>c;
    if(c%2==1) {
        cout<<(a^b);
    }else {
        cout<<a;
    }
}