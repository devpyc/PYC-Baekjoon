#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n"<<lcm(a,b);
}