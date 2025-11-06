#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    long long sum=0;
    while (n--){
        long long x;
        cin>>x;
        sum^=x;
    }
    cout<<(sum!=0?"koosaga":"cubelover");
}