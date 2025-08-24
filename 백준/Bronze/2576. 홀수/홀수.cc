#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t=7;
    vector<int>arr;
    int ans=0;
    while (t--) {
        int x;
        cin>>x;
        if (x%2==1) arr.push_back(x),ans+=x;
    }
    (ans!=0)?cout<<ans<<"\n"<<*min_element(arr.begin(),arr.end()):cout<<-1;
}