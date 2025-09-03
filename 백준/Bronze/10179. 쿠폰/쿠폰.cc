#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    cout.precision(2);
    cout<<fixed;
    while (t--) {
        double n;
        cin>>n;
        cout<<"$"<<n-(n*0.2)<<"\n";
    }
}