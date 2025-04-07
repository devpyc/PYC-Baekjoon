#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    scanf("%d:%d",&n,&m);
    int ans=std::gcd(n,m);
    printf("%d:%d",n/ans,m/ans);
}