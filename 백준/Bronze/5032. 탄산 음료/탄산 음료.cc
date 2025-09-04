#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int e,f,c;
    cin>>e>>f>>c;

    int n=e+f,ans=0;
    while (n>=c) {
        int res=n/c;
        ans+=res;
        n=n%c+res;
    }
    cout<<ans;
}