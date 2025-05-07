#include <bits/stdc++.h>
using namespace std;

int solve(int a,int b) {
    int ans=(a-1+b)%4;
    return ans==0?4:ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int sum1=a+b,sum2=c+d;
    int res=solve(1,sum1);
    int ans=solve(res,sum2);

    cout<<ans<<"\n";
}