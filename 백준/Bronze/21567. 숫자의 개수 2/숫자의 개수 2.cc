#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long a,b,c;
    cin>>a>>b>>c;
    long long ans=a*b*c;
    vector<long long>arr(10);
    while (ans!=0) {
        arr[ans%10]++;
        ans/=10;
    }
    for (int i:arr) {
        cout<<i<<"\n";
    }
}